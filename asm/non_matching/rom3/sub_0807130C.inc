	THUMB_FUNC_START sub_0807130C
sub_0807130C: @ 0x0807130C
	push {lr}
	ldr r1, _08071328  @ =gRam
	ldr r2, _0807132C  @ =0x00000B0C
	add r0, r1, r2
	ldrh r0, [r0]
	cmp r0, #0
	bne _08071324
	ldr r0, _08071330  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_08071324:
	pop {r0}
	bx r0
_08071328:
	.4byte gRam
_0807132C:
	.4byte 0x00000B0C
_08071330:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0807130C

