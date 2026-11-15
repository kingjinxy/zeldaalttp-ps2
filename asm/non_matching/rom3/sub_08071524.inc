	THUMB_FUNC_START sub_08071524
sub_08071524: @ 0x08071524
	push {r4-r6,lr}
	ldr r4, _08071550  @ =gRam
	ldr r0, _08071554  @ =0x00000A38
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	mov r5, #0
	mov r6, #0
	strh r0, [r1]
	bl sub_08125860
	bl sub_081271C8
	ldr r1, _08071558  @ =0x000009AD
	add r0, r4, r1
	strb r5, [r0]
	ldr r0, _0807155C  @ =0x000009E8
	add r4, r4, r0
	strh r6, [r4]
	pop {r4-r6}
	pop {r0}
	bx r0
_08071550:
	.4byte gRam
_08071554:
	.4byte 0x00000A38
_08071558:
	.4byte 0x000009AD
_0807155C:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08071524

