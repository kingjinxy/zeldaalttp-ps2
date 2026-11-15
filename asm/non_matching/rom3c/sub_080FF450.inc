	THUMB_FUNC_START sub_080FF450
sub_080FF450: @ 0x080FF450
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080FF51C  @ =gRam
	ldr r1, _080FF520  @ =0x00001082
	add r0, r4, r1
	add r0, r5, r0
	ldrb r3, [r0]
	ldr r2, _080FF524  @ =0x00000EE2
	add r0, r4, r2
	add r0, r3, r0
	ldrb r0, [r0]
	ldr r7, _080FF528  @ =0x00000968
	add r2, r4, r7
	mov r6, #0
	strb r0, [r2]
	ldr r1, _080FF52C  @ =0x00000F02
	add r0, r4, r1
	add r0, r3, r0
	ldrb r1, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r1, [r0]
	ldr r1, _080FF530  @ =0x00000ED2
	add r0, r4, r1
	add r0, r3, r0
	ldrb r0, [r0]
	add r7, r7, #3
	add r7, r7, r4
	mov r12, r7
	strb r0, [r7]
	add r1, r1, #32
	add r0, r4, r1
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r7, _080FF534  @ =0x0000096D
	add r0, r4, r7
	strb r1, [r0]
	ldr r1, _080FF538  @ =0x00001622
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r7, _080FF53C  @ =0x00001623
	add r0, r4, r7
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r1, r1, r0
	add r1, r1, #2
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #3
	bhi _080FF4DA
	ldr r1, _080FF540  @ =0x00001624
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _080FF544  @ =0x00001625
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r7, r12
	ldrh r0, [r7]
	sub r1, r1, r0
	add r1, r1, #2
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #3
	bls _080FF558
_080FF4DA:
	ldr r1, _080FF548  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	add r0, r5, #0
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080FF512
	add r0, r5, #0
	mov r1, #16
	bl sub_080C2DCC
	ldr r2, _080FF54C  @ =0x00000F12
	add r0, r4, r2
	add r0, r5, r0
	mov r7, #150
	lsl r7, r7, #4
	add r1, r4, r7
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080FF550  @ =0x00000F22
	add r0, r4, r1
	add r0, r5, r0
	ldr r2, _080FF554  @ =0x00000961
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
_080FF512:
	add r0, r5, #0
	bl Sprite3_Move
	b _080FF592
	.byte 0x00
	.byte 0x00
_080FF51C:
	.4byte gRam
_080FF520:
	.4byte 0x00001082
_080FF524:
	.4byte 0x00000EE2
_080FF528:
	.4byte 0x00000968
_080FF52C:
	.4byte 0x00000F02
_080FF530:
	.4byte 0x00000ED2
_080FF534:
	.4byte 0x0000096D
_080FF538:
	.4byte 0x00001622
_080FF53C:
	.4byte 0x00001623
_080FF540:
	.4byte 0x00001624
_080FF544:
	.4byte 0x00001625
_080FF548:
	.4byte 0x00000996
_080FF54C:
	.4byte 0x00000F12
_080FF550:
	.4byte 0x00000F22
_080FF554:
	.4byte 0x00000961
_080FF558:
	ldr r7, _080FF598  @ =0x00000FA2
	add r0, r4, r7
	add r0, r3, r0
	strb r6, [r0]
	ldr r1, _080FF59C  @ =0x00000F62
	add r0, r4, r1
	add r0, r5, r0
	strb r6, [r0]
	ldr r2, _080FF5A0  @ =0x00000F52
	add r0, r4, r2
	add r0, r5, r0
	strb r6, [r0]
	ldr r7, _080FF5A4  @ =0x000010A2
	add r1, r4, r7
	add r1, r5, r1
	add r2, r2, #208
	add r0, r4, r2
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	bl GetRandomInt
	sub r7, r7, #224
	add r2, r4, r7
	add r2, r5, r2
	mov r1, #31
	and r1, r1, r0
	add r1, r1, #32
	strb r1, [r2]
_080FF592:
	pop {r4-r7}
	pop {r0}
	bx r0
_080FF598:
	.4byte 0x00000FA2
_080FF59C:
	.4byte 0x00000F62
_080FF5A0:
	.4byte 0x00000F52
_080FF5A4:
	.4byte 0x000010A2
	THUMB_FUNC_END sub_080FF450

