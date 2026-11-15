	THUMB_FUNC_START sub_080715DC
sub_080715DC: @ 0x080715DC
	push {lr}
	ldr r1, _08071644  @ =gRam
	ldr r2, _08071648  @ =0x00001718
	add r0, r1, r2
	ldrb r0, [r0]
	add r2, r1, #0
	cmp r0, #3
	beq _08071602
	cmp r0, #8
	beq _08071602
	cmp r0, #9
	beq _08071602
	cmp r0, #10
	beq _08071602
	ldr r3, _0807164C  @ =0x000016F8
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _08071664
_08071602:
	add r1, r2, #0
	ldr r3, _08071648  @ =0x00001718
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #6
	beq _08071616
	ldr r0, _08071650  @ =0x000016CD
	add r1, r1, r0
	mov r0, #0
	strb r0, [r1]
_08071616:
	ldr r3, _08071654  @ =0x000016CE
	add r1, r2, r3
	mov r0, #0
	strb r0, [r1]
	ldr r0, _08071658  @ =0x0000174B
	add r1, r2, r0
	mov r0, #3
	strb r0, [r1]
	ldr r1, _0807165C  @ =0x00001608
	add r0, r2, r1
	ldrh r1, [r0]
	sub r3, r3, #10
	add r0, r2, r3
	strh r1, [r0]
	ldr r1, _08071660  @ =0x0000160C
	add r0, r2, r1
	ldrh r1, [r0]
	sub r3, r3, #4
	add r0, r2, r3
	strh r1, [r0]
	mov r0, #1
	b _08071666
	.byte 0x00
	.byte 0x00
_08071644:
	.4byte gRam
_08071648:
	.4byte 0x00001718
_0807164C:
	.4byte 0x000016F8
_08071650:
	.4byte 0x000016CD
_08071654:
	.4byte 0x000016CE
_08071658:
	.4byte 0x0000174B
_0807165C:
	.4byte 0x00001608
_08071660:
	.4byte 0x0000160C
_08071664:
	mov r0, #0
_08071666:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080715DC

	.byte 0x00
	.byte 0x00
