	THUMB_FUNC_START sub_08074430
sub_08074430: @ 0x08074430
	push {lr}
	bl sub_08077294
	ldr r1, _08074454  @ =gRam
	ldr r0, _08074458  @ =0x000009AC
	add r2, r1, r0
	mov r3, #0
	mov r0, #16
	strb r0, [r2]
	ldr r2, _0807445C  @ =0x000009E8
	add r0, r1, r2
	mov r2, #0
	strh r3, [r0]
	ldr r0, _08074460  @ =0x000009AD
	add r1, r1, r0
	strb r2, [r1]
	pop {r0}
	bx r0
_08074454:
	.4byte gRam
_08074458:
	.4byte 0x000009AC
_0807445C:
	.4byte 0x000009E8
_08074460:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08074430

