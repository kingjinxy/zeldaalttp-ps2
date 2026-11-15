	THUMB_FUNC_START sub_0807431C
sub_0807431C: @ 0x0807431C
	push {r4-r6,lr}
	ldr r4, _08074348  @ =gRam
	ldr r1, _0807434C  @ =0x00000AB6
	add r0, r4, r1
	ldrh r0, [r0]
	add r1, r1, #6
	add r5, r4, r1
	mov r6, #0
	strh r0, [r5]
	bl sub_08077ED0
	strh r6, [r5]
	ldr r0, _08074350  @ =0x000009AD
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	bl sub_080AE564
	pop {r4-r6}
	pop {r0}
	bx r0
_08074348:
	.4byte gRam
_0807434C:
	.4byte 0x00000AB6
_08074350:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0807431C

