	THUMB_FUNC_START sub_080D2FA0
sub_080D2FA0: @ 0x080D2FA0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	add r0, r4, #0
	bl sub_080D3808
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080D3054
	add r0, r4, #0
	bl sub_080C5080
	ldr r7, _080D301C  @ =gRam
	ldr r1, _080D3020  @ =0x00001152
	add r0, r7, r1
	add r5, r4, r0
	ldrb r0, [r5]
	sub r0, r0, #2
	strb r0, [r5]
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r1, _080D3024  @ =0x00001142
	add r0, r7, r1
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080D2FF2
	strb r6, [r2]
	mov r0, #16
	strb r0, [r5]
_080D2FF2:
	ldr r1, _080D3028  @ =0x00000F52
	add r0, r7, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080D3034
	ldr r0, _080D302C  @ =0x00001663
	add r1, r7, r0
	mov r0, #7
	strb r0, [r1]
	bl sub_0812F9A8
	add r0, r4, #0
	bl sub_081146A4
	ldr r1, _080D3030  @ =0x00000FA2
	add r0, r7, r1
	add r0, r4, r0
	strb r6, [r0]
	b _080D3054
	.byte 0x00
	.byte 0x00
_080D301C:
	.4byte gRam
_080D3020:
	.4byte 0x00001152
_080D3024:
	.4byte 0x00001142
_080D3028:
	.4byte 0x00000F52
_080D302C:
	.4byte 0x00001663
_080D3030:
	.4byte 0x00000FA2
_080D3034:
	ldr r1, _080D3060  @ =0x00000FB2
	add r0, r7, r1
	add r0, r0, r8
	mov r1, #1
	strb r1, [r0]
	mov r0, r8
	mov r1, #228
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D3054
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
_080D3054:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080D3060:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080D2FA0

