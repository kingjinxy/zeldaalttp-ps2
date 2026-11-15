	THUMB_FUNC_START sub_080DD608
sub_080DD608: @ 0x080DD608
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, #4
	bl sub_080CF3A0
	add r0, r4, #0
	bl sub_080C58F0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DD680
	ldr r5, _080DD688  @ =gRam
	ldr r1, _080DD68C  @ =0x00000F92
	add r0, r5, r1
	add r2, r4, r0
	ldr r3, _080DD690  @ =0x00000996
	add r0, r5, r3
	ldrb r0, [r0]
	lsr r1, r0, #4
	mov r0, #1
	and r1, r1, r0
	add r0, r1, #2
	strb r0, [r2]
	ldr r3, _080DD694  @ =0x00000FD2
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DD668
	add r0, r1, #3
	strb r0, [r2]
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r1, _080DD698  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080DD668
	ldr r2, _080DD69C  @ =0x00000FA2
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
_080DD668:
	ldr r1, _080DD688  @ =gRam
	ldr r3, _080DD698  @ =0x00000FC2
	add r0, r1, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #3
	bhi _080DD680
	ldr r2, _080DD68C  @ =0x00000F92
	add r0, r1, r2
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
_080DD680:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DD688:
	.4byte gRam
_080DD68C:
	.4byte 0x00000F92
_080DD690:
	.4byte 0x00000996
_080DD694:
	.4byte 0x00000FD2
_080DD698:
	.4byte 0x00000FC2
_080DD69C:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080DD608

