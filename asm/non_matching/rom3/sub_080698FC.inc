	THUMB_FUNC_START sub_080698FC
sub_080698FC: @ 0x080698FC
	push {r4,lr}
	ldr r1, _0806991C  @ =gRam
	ldr r2, _08069920  @ =0x00000994
	add r0, r1, r2
	mov r3, #0
	mov r2, #2
	strb r2, [r0]
	ldr r4, _08069924  @ =0x000009A3
	add r0, r1, r4
	strb r2, [r0]
	ldr r0, _08069928  @ =0x000009A4
	add r1, r1, r0
	strb r3, [r1]
	pop {r4}
	pop {r0}
	bx r0
_0806991C:
	.4byte gRam
_08069920:
	.4byte 0x00000994
_08069924:
	.4byte 0x000009A3
_08069928:
	.4byte 0x000009A4
	THUMB_FUNC_END sub_080698FC

