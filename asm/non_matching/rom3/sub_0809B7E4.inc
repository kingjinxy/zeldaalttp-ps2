	THUMB_FUNC_START sub_0809B7E4
sub_0809B7E4: @ 0x0809B7E4
	push {lr}
	ldr r1, _0809B824  @ =gRam
	mov r0, #182
	lsl r0, r0, #5
	add r2, r1, r0
	mov r3, #0
	ldr r0, _0809B828  @ =0x0000215A
	strh r0, [r2]
	ldr r0, _0809B82C  @ =0x000016C4
	add r2, r1, r0
	mov r0, #148
	lsl r0, r0, #4
	strh r0, [r2]
	ldr r0, _0809B830  @ =0x00001718
	add r2, r1, r0
	mov r0, #22
	strb r0, [r2]
	ldr r2, _0809B834  @ =0x0000180E
	add r0, r1, r2
	strb r3, [r0]
	add r2, r2, #1
	add r0, r1, r2
	strb r3, [r0]
	ldr r0, _0809B838  @ =0x00001806
	add r1, r1, r0
	mov r0, #3
	strb r0, [r1]
	mov r0, #32
	bl sub_080AD294
	pop {r0}
	bx r0
_0809B824:
	.4byte gRam
_0809B828:
	.4byte 0x0000215A
_0809B82C:
	.4byte 0x000016C4
_0809B830:
	.4byte 0x00001718
_0809B834:
	.4byte 0x0000180E
_0809B838:
	.4byte 0x00001806
	THUMB_FUNC_END sub_0809B7E4

