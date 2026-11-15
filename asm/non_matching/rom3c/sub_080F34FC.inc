	THUMB_FUNC_START sub_080F34FC
sub_080F34FC: @ 0x080F34FC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080F3CA0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F35CA
	ldr r5, _080F3534  @ =gRam
	ldr r1, _080F3538  @ =0x00000F82
	add r0, r5, r1
	add r0, r4, r0
	ldrb r6, [r0]
	cmp r6, #0
	beq _080F3544
	ldr r2, _080F353C  @ =0x00000F62
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
	ldr r1, _080F3540  @ =gUnknown_08179530
	sub r2, r2, #16
	b _080F3560
	.byte 0x00
	.byte 0x00
_080F3534:
	.4byte gRam
_080F3538:
	.4byte 0x00000F82
_080F353C:
	.4byte 0x00000F62
_080F3540:
	.4byte gUnknown_08179530
_080F3544:
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F3580
	ldr r1, _080F3574  @ =0x00000FD2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F3598
	ldr r1, _080F3578  @ =gUnknown_08179548
	ldr r2, _080F357C  @ =0x00001052
_080F3560:
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	b _080F35CA
_080F3574:
	.4byte 0x00000FD2
_080F3578:
	.4byte gUnknown_08179548
_080F357C:
	.4byte 0x00001052
_080F3580:
	bl sub_080AF16C
	ldr r1, _080F35D0  @ =0x00001719
	add r0, r5, r1
	strb r6, [r0]
	bl sub_0809945C
	ldr r2, _080F35D4  @ =0x00000FD2
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #7
	strb r1, [r0]
_080F3598:
	ldr r2, _080F35D8  @ =gRam
	ldr r1, _080F35DC  @ =0x00001052
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r0, _080F35E0  @ =0x000016FA
	add r1, r2, r0
	mov r0, #129
	strb r0, [r1]
	ldr r0, _080F35D0  @ =0x00001719
	add r1, r2, r0
	mov r0, #8
	strb r0, [r1]
	ldr r1, _080F35E4  @ =gUnknown_0817953C
	ldr r0, _080F35E8  @ =0x00000F52
	add r2, r2, r0
	add r2, r4, r2
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080F35CA:
	pop {r4-r6}
	pop {r0}
	bx r0
_080F35D0:
	.4byte 0x00001719
_080F35D4:
	.4byte 0x00000FD2
_080F35D8:
	.4byte gRam
_080F35DC:
	.4byte 0x00001052
_080F35E0:
	.4byte 0x000016FA
_080F35E4:
	.4byte gUnknown_0817953C
_080F35E8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F34FC

