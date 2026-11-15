	THUMB_FUNC_START sub_080F3680
sub_080F3680: @ 0x080F3680
	push {r4-r7,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r7, _080F3734  @ =gRam
	ldr r0, _080F3738  @ =0x00000FB1
	add r4, r7, r0
	ldrb r0, [r4]
	add r0, r0, #1
	mov r5, #0
	strb r0, [r4]
	mov r0, #115
	bl sub_080CA538
	add r6, r0, #0
	strb r5, [r4]
	ldr r1, _080F373C  @ =0x00001012
	add r2, r7, r1
	add r2, r6, r2
	ldrb r1, [r2]
	mov r3, #240
	add r0, r3, #0
	and r0, r0, r1
	mov r1, #3
	orr r0, r0, r1
	strb r0, [r2]
	ldr r2, _080F3740  @ =0x00000EE2
	add r0, r7, r2
	add r0, r6, r0
	strb r3, [r0]
	ldr r3, _080F3744  @ =0x00000F02
	add r0, r7, r3
	add r0, r6, r0
	mov r1, #4
	strb r1, [r0]
	ldr r0, _080F3748  @ =0x00000ED2
	add r4, r7, r0
	add r4, r6, r4
	mov r0, #55
	strb r0, [r4]
	ldr r1, _080F374C  @ =0x00000EF2
	add r3, r7, r1
	add r3, r6, r3
	mov r1, #2
	strb r1, [r3]
	ldr r2, _080F3750  @ =0x00001062
	add r0, r7, r2
	add r0, r6, r0
	strb r1, [r0]
	ldr r1, _080F3754  @ =0x00001132
	add r0, r7, r1
	add r0, r6, r0
	mov r1, #11
	strb r1, [r0]
	ldr r2, _080F3758  @ =0x00000E75
	add r1, r7, r2
	add r1, r6, r1
	ldrb r2, [r1]
	mov r0, #32
	orr r0, r0, r2
	strb r0, [r1]
	ldr r1, _080F375C  @ =0x00001052
	add r0, r7, r1
	add r0, r6, r0
	mov r5, #1
	strb r5, [r0]
	ldrb r0, [r4]
	mov r1, #150
	lsl r1, r1, #4
	add r2, r7, r1
	strb r0, [r2]
	ldrb r1, [r3]
	ldr r3, _080F3760  @ =0x00000961
	add r0, r7, r3
	strb r1, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r7, r1
	ldrh r0, [r0]
	ldrh r2, [r2]
	cmp r0, r2
	bcs _080F372C
	ldr r2, _080F3764  @ =0x00000F82
	add r0, r7, r2
	add r0, r6, r0
	strb r5, [r0]
_080F372C:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F3734:
	.4byte gRam
_080F3738:
	.4byte 0x00000FB1
_080F373C:
	.4byte 0x00001012
_080F3740:
	.4byte 0x00000EE2
_080F3744:
	.4byte 0x00000F02
_080F3748:
	.4byte 0x00000ED2
_080F374C:
	.4byte 0x00000EF2
_080F3750:
	.4byte 0x00001062
_080F3754:
	.4byte 0x00001132
_080F3758:
	.4byte 0x00000E75
_080F375C:
	.4byte 0x00001052
_080F3760:
	.4byte 0x00000961
_080F3764:
	.4byte 0x00000F82
	THUMB_FUNC_END sub_080F3680

