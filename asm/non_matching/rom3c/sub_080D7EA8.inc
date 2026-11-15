	THUMB_FUNC_START sub_080D7EA8
sub_080D7EA8: @ 0x080D7EA8
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D7F4A
	add r0, r4, #0
	bl sub_080C5044
	ldr r6, _080D7F50  @ =gRam
	ldr r0, _080D7F54  @ =0x00000F62
	add r2, r6, r0
	add r2, r4, r2
	ldr r3, _080D7F58  @ =gUnknown_08175724
	ldr r1, _080D7F5C  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	mov r1, #4
	and r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #26
	ldr r5, _080D7F60  @ =0x00000FB2
	add r0, r6, r5
	add r5, r4, r0
	ldrb r0, [r5]
	lsl r0, r0, #1
	orr r1, r1, r0
	add r1, r1, r3
	ldrb r0, [r1]
	add r0, r0, #8
	strb r0, [r2]
	ldr r1, _080D7F64  @ =0x00000FD2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D7F4A
	add r0, r4, #0
	bl sub_080D7F7C
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C7A20
	mov r1, #15
	and r1, r1, r0
	cmp r1, #0
	beq _080D7F2A
	bl GetRandomInt
	ldr r2, _080D7F68  @ =gUnknown_0817572C
	ldrb r1, [r5]
	lsl r1, r1, #1
	lsl r0, r0, #24
	lsr r0, r0, #31
	orr r1, r1, r0
	add r1, r1, r2
	ldrb r0, [r1]
	strb r0, [r5]
_080D7F2A:
	ldr r0, _080D7F6C  @ =0x00000F22
	add r1, r6, r0
	add r1, r7, r1
	ldr r2, _080D7F70  @ =gUnknown_08175734
	ldrb r0, [r5]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080D7F74  @ =0x00000F12
	add r1, r6, r0
	add r1, r7, r1
	ldr r2, _080D7F78  @ =gUnknown_08175738
	ldrb r0, [r5]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_080D7F4A:
	pop {r4-r7}
	pop {r0}
	bx r0
_080D7F50:
	.4byte gRam
_080D7F54:
	.4byte 0x00000F62
_080D7F58:
	.4byte gUnknown_08175724
_080D7F5C:
	.4byte 0x00000996
_080D7F60:
	.4byte 0x00000FB2
_080D7F64:
	.4byte 0x00000FD2
_080D7F68:
	.4byte gUnknown_0817572C
_080D7F6C:
	.4byte 0x00000F22
_080D7F70:
	.4byte gUnknown_08175734
_080D7F74:
	.4byte 0x00000F12
_080D7F78:
	.4byte gUnknown_08175738
	THUMB_FUNC_END sub_080D7EA8

