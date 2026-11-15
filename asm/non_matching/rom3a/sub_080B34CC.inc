	THUMB_FUNC_START sub_080B34CC
sub_080B34CC: @ 0x080B34CC
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	ldr r4, _080B3504  @ =gRam
	ldr r0, _080B3508  @ =0x00000CA2
	add r5, r4, r0
	mov r0, #0
	mov r8, r0
	mov r6, #0
	mov r0, #16
	strh r0, [r5]
	bl sub_0812FA28
	strh r6, [r5]
	ldr r0, _080B350C  @ =0x00000A4C
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r0, _080B3510  @ =0x0000099D
	add r4, r4, r0
	mov r0, r8
	strb r0, [r4]
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
_080B3504:
	.4byte gRam
_080B3508:
	.4byte 0x00000CA2
_080B350C:
	.4byte 0x00000A4C
_080B3510:
	.4byte 0x0000099D
	THUMB_FUNC_END sub_080B34CC

