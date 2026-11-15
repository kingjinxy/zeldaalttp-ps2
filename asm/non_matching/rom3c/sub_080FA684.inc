	THUMB_FUNC_START sub_080FA684
sub_080FA684: @ 0x080FA684
	push {r4,r5,lr}
	add r5, r0, #0
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r4, _080FA700  @ =gRam
	ldr r0, _080FA704  @ =0x00000F52
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r2, _080FA708  @ =0x00000968
	add r1, r4, r2
	mov r0, #245
	strb r0, [r1]
	ldr r0, _080FA70C  @ =0x00000969
	add r1, r4, r0
	mov r0, #12
	strb r0, [r1]
	add r2, r2, #4
	add r1, r4, r2
	mov r0, #254
	strb r0, [r1]
	ldr r0, _080FA710  @ =0x0000096D
	add r1, r4, r0
	mov r0, #6
	strb r0, [r1]
	add r0, r5, #0
	mov r1, #9
	bl sub_080C2DCC
	ldr r1, _080FA714  @ =0x00000F12
	add r0, r4, r1
	add r0, r5, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080FA718  @ =0x00000F22
	add r1, r4, r0
	add r1, r5, r1
	add r2, r2, #1
	add r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080FA71C  @ =0x00000FB2
	add r2, r4, r1
	add r2, r5, r2
	lsl r0, r0, #24
	lsr r0, r0, #31
	mov r1, #3
	eor r0, r0, r1
	strb r0, [r2]
	ldr r2, _080FA720  @ =0x00000FC2
	add r4, r4, r2
	add r5, r5, r4
	mov r0, #32
	strb r0, [r5]
	pop {r4,r5}
	pop {r0}
	bx r0
_080FA700:
	.4byte gRam
_080FA704:
	.4byte 0x00000F52
_080FA708:
	.4byte 0x00000968
_080FA70C:
	.4byte 0x00000969
_080FA710:
	.4byte 0x0000096D
_080FA714:
	.4byte 0x00000F12
_080FA718:
	.4byte 0x00000F22
_080FA71C:
	.4byte 0x00000FB2
_080FA720:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080FA684

