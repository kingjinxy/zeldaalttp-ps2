	THUMB_FUNC_START sub_08074618
sub_08074618: @ 0x08074618
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	ldr r5, _08074644  @ =gRam
	ldr r0, _08074648  @ =0x000009AC
	add r6, r5, r0
	ldrb r0, [r6]
	mov r8, r0
	ldr r0, _0807464C  @ =0x000009AD
	add r5, r5, r0
	ldrb r4, [r5]
	bl sub_08074430
	add r4, r4, #1
	strb r4, [r5]
	mov r0, r8
	strb r0, [r6]
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
_08074644:
	.4byte gRam
_08074648:
	.4byte 0x000009AC
_0807464C:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08074618

