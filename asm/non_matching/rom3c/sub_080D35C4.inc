	THUMB_FUNC_START sub_080D35C4
sub_080D35C4: @ 0x080D35C4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	add r0, r4, #0
	bl sub_080D39D4
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D363C
	ldr r5, _080D3618  @ =gRam
	ldr r1, _080D361C  @ =0x00000FC2
	add r0, r5, r1
	add r7, r4, r0
	ldrb r6, [r7]
	cmp r6, #0
	bne _080D363C
	ldr r0, _080D3620  @ =0x00000F62
	add r2, r5, r0
	add r2, r4, r2
	ldrb r3, [r2]
	add r0, r3, #1
	mov r1, #7
	and r0, r0, r1
	strb r0, [r2]
	ldr r0, _080D3624  @ =gUnknown_08174E94
	add r0, r3, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080D362C
	ldr r1, _080D3628  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
	b _080D363C
_080D3618:
	.4byte gRam
_080D361C:
	.4byte 0x00000FC2
_080D3620:
	.4byte 0x00000F62
_080D3624:
	.4byte gUnknown_08174E94
_080D3628:
	.4byte 0x00000FA2
_080D362C:
	ldr r2, _080D3648  @ =0x00000F92
	add r0, r5, r2
	add r0, r0, r8
	strb r1, [r0]
	ldr r0, _080D364C  @ =gUnknown_08174E9B
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r7]
_080D363C:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D3648:
	.4byte 0x00000F92
_080D364C:
	.4byte gUnknown_08174E9B
	THUMB_FUNC_END sub_080D35C4

