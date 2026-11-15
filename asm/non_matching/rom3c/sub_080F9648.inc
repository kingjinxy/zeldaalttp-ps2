	THUMB_FUNC_START sub_080F9648
sub_080F9648: @ 0x080F9648
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r0, r7, #0
	bl sub_080C1F70
	add r0, r7, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F96A6
	ldr r4, _080F96AC  @ =gRam
	ldr r0, _080F96B0  @ =0x00001052
	add r1, r4, r0
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r7, #0
	bl sub_080C5044
	ldr r1, _080F96B4  @ =0x00000F12
	add r5, r4, r1
	add r5, r7, r5
	ldrb r6, [r5]
	ldr r1, _080F96B8  @ =0x00001152
	add r0, r4, r1
	add r0, r7, r0
	ldrb r0, [r0]
	add r0, r6, r0
	strb r0, [r5]
	add r0, r7, #0
	bl Sprite3_Move
	strb r6, [r5]
	ldr r1, _080F96BC  @ =gUnknown_0817A32C
	ldr r0, _080F96C0  @ =0x00000F52
	add r4, r4, r0
	add r4, r7, r4
	ldrb r0, [r4]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r7, #0
	bl _call_via_r1
_080F96A6:
	pop {r4-r7}
	pop {r0}
	bx r0
_080F96AC:
	.4byte gRam
_080F96B0:
	.4byte 0x00001052
_080F96B4:
	.4byte 0x00000F12
_080F96B8:
	.4byte 0x00001152
_080F96BC:
	.4byte gUnknown_0817A32C
_080F96C0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F9648

