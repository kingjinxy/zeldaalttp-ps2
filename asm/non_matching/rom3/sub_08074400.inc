	THUMB_FUNC_START sub_08074400
sub_08074400: @ 0x08074400
	push {lr}
	bl sub_080CBA5C
	bl sub_080CBCC8
	ldr r0, _08074424  @ =gRam
	ldr r2, _08074428  @ =0x00001791
	add r1, r0, r2
	mov r2, #0
	strb r2, [r1]
	ldr r1, _0807442C  @ =0x00001792
	add r0, r0, r1
	strb r2, [r0]
	bl sub_08072F1C
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08074424:
	.4byte gRam
_08074428:
	.4byte 0x00001791
_0807442C:
	.4byte 0x00001792
	THUMB_FUNC_END sub_08074400

