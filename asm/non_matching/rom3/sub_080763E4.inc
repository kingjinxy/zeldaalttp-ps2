	THUMB_FUNC_START sub_080763E4
sub_080763E4: @ 0x080763E4
	push {r4,lr}
	ldr r1, _08076424  @ =gRam
	ldr r2, _08076428  @ =0x00000CAE
	add r0, r1, r2
	ldrb r2, [r0]
	ldr r3, _0807642C  @ =0x00001ABE
	add r0, r1, r3
	mov r3, #0
	strb r2, [r0]
	mov r4, #203
	lsl r4, r4, #4
	add r0, r1, r4
	ldrb r2, [r0]
	ldr r4, _08076430  @ =0x00001ABF
	add r0, r1, r4
	strb r2, [r0]
	ldr r0, _08076434  @ =0x00000CFA
	add r2, r1, r0
	mov r0, #2
	strh r0, [r2]
	ldr r2, _08076438  @ =0x00000CF8
	add r0, r1, r2
	strh r3, [r0]
	ldr r4, _0807643C  @ =0x00000CFC
	add r1, r1, r4
	strh r3, [r1]
	bl sub_08077D98
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08076424:
	.4byte gRam
_08076428:
	.4byte 0x00000CAE
_0807642C:
	.4byte 0x00001ABE
_08076430:
	.4byte 0x00001ABF
_08076434:
	.4byte 0x00000CFA
_08076438:
	.4byte 0x00000CF8
_0807643C:
	.4byte 0x00000CFC
	THUMB_FUNC_END sub_080763E4

