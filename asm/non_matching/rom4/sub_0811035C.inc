	THUMB_FUNC_START sub_0811035C
sub_0811035C: @ 0x0811035C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_08110450
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _08110418
	ldr r6, _08110420  @ =gRam
	ldr r1, _08110424  @ =0x00001072
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08110388
	add r0, r4, #0
	bl sub_0811016C
_08110388:
	add r0, r4, #0
	bl sub_080C1FD0
	add r0, r4, #0
	bl sub_080C5044
	ldr r2, _08110428  @ =0x00001052
	add r1, r6, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r3, _0811042C  @ =0x00000F22
	add r1, r6, r3
	add r1, r4, r1
	ldr r2, _08110430  @ =gUnknown_0817D404
	add r3, r3, #144
	add r0, r6, r3
	add r5, r4, r0
	ldrb r0, [r5]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08110434  @ =0x00000F12
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _08110438  @ =gUnknown_0817D414
	ldrb r0, [r5]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C6F48
	ldr r1, _0811043C  @ =0x00001042
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08110400
	bl GetRandomInt
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _081103F6
	ldr r2, _08110440  @ =0x00001082
	add r1, r6, r2
	add r1, r4, r1
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
_081103F6:
	ldr r0, _08110444  @ =gUnknown_0817D424
	ldrb r1, [r5]
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r5]
_08110400:
	ldr r1, _08110448  @ =gUnknown_0817D3F8
	ldr r0, _08110420  @ =gRam
	ldr r3, _0811044C  @ =0x00000F52
	add r0, r0, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_08110418:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08110420:
	.4byte gRam
_08110424:
	.4byte 0x00001072
_08110428:
	.4byte 0x00001052
_0811042C:
	.4byte 0x00000F22
_08110430:
	.4byte gUnknown_0817D404
_08110434:
	.4byte 0x00000F12
_08110438:
	.4byte gUnknown_0817D414
_0811043C:
	.4byte 0x00001042
_08110440:
	.4byte 0x00001082
_08110444:
	.4byte gUnknown_0817D424
_08110448:
	.4byte gUnknown_0817D3F8
_0811044C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0811035C

