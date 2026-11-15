	THUMB_FUNC_START sub_0807958C
sub_0807958C: @ 0x0807958C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _080795BC  @ =gRam
	ldr r2, _080795C0  @ =0x00000A1C
	add r1, r4, r2
	mov r5, #0
	strh r0, [r1]
	bl sub_08078840
	ldr r1, _080795C4  @ =0x00000B02
	add r0, r4, r1
	strh r5, [r0]
	mov r2, #176
	lsl r2, r2, #4
	add r4, r4, r2
	strh r5, [r4]
	bl sub_08079204
	bl sub_08070B60
	pop {r4,r5}
	pop {r0}
	bx r0
_080795BC:
	.4byte gRam
_080795C0:
	.4byte 0x00000A1C
_080795C4:
	.4byte 0x00000B02
	THUMB_FUNC_END sub_0807958C

