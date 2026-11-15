	THUMB_FUNC_START sub_080D5CDC
sub_080D5CDC: @ 0x080D5CDC
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080D5D18  @ =gRam
	ldr r1, _080D5D1C  @ =0x00000F62
	add r0, r6, r1
	add r5, r4, r0
	ldrb r7, [r5]
	cmp r7, #0
	bne _080D5D52
	ldr r2, _080D5D20  @ =0x00000F22
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r3, _080D5D24  @ =0x00000F12
	add r0, r6, r3
	add r0, r4, r0
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C6F48
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D5D2C
	ldr r1, _080D5D28  @ =0x00000FA2
	add r0, r6, r1
	add r0, r4, r0
	strb r7, [r0]
	b _080D5E02
_080D5D18:
	.4byte gRam
_080D5D1C:
	.4byte 0x00000F62
_080D5D20:
	.4byte 0x00000F22
_080D5D24:
	.4byte 0x00000F12
_080D5D28:
	.4byte 0x00000FA2
_080D5D2C:
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	ldr r2, _080D5DB0  @ =0x00000F82
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #10
	strb r1, [r0]
	ldr r3, _080D5DB4  @ =0x00001032
	add r1, r6, r3
	add r1, r4, r1
	ldrb r0, [r1]
	mov r2, #64
	orr r0, r0, r2
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #108
	bl sub_080CF0AC
_080D5D52:
	ldr r6, _080D5DB8  @ =gRam
	ldr r0, _080D5DBC  @ =0x00000D94
	add r2, r6, r0
	add r2, r4, r2
	ldr r1, _080D5DC0  @ =gUnknown_081751C8
	ldr r3, _080D5DC4  @ =0x00000F52
	add r0, r6, r3
	add r5, r4, r0
	ldrb r0, [r5]
	add r0, r0, r1
	ldrb r1, [r2]
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	add r0, r4, #0
	bl sub_080D6268
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _080D5E02
	ldr r0, _080D5DC8  @ =gSword
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080D5DD4
	ldrb r0, [r5]
	cmp r0, #5
	beq _080D5DE0
	ldr r1, _080D5DCC  @ =0x000010C2
	add r0, r6, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080D5DE0
	strb r2, [r1]
	mov r0, #5
	strb r0, [r5]
	ldr r2, _080D5DD0  @ =0x00000FC2
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	b _080D5DE0
	.byte 0x00
	.byte 0x00
_080D5DB0:
	.4byte 0x00000F82
_080D5DB4:
	.4byte 0x00001032
_080D5DB8:
	.4byte gRam
_080D5DBC:
	.4byte 0x00000D94
_080D5DC0:
	.4byte gUnknown_081751C8
_080D5DC4:
	.4byte 0x00000F52
_080D5DC8:
	.4byte gSword
_080D5DCC:
	.4byte 0x000010C2
_080D5DD0:
	.4byte 0x00000FC2
_080D5DD4:
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D5E02
_080D5DE0:
	ldr r2, _080D5E08  @ =gRam
	ldr r3, _080D5E0C  @ =0x00001172
	add r0, r2, r3
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _080D5E10  @ =gUnknown_081751D0
	ldr r0, _080D5E14  @ =0x00000F52
	add r2, r2, r0
	add r2, r4, r2
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080D5E02:
	pop {r4-r7}
	pop {r0}
	bx r0
_080D5E08:
	.4byte gRam
_080D5E0C:
	.4byte 0x00001172
_080D5E10:
	.4byte gUnknown_081751D0
_080D5E14:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D5CDC

