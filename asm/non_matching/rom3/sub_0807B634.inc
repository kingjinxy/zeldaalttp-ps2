	THUMB_FUNC_START sub_0807B634
sub_0807B634: @ 0x0807B634
	push {lr}
	ldr r0, _0807B64C  @ =gRam
	mov r1, #188
	lsl r1, r1, #4
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _0807B648
	bl sub_0807A178
_0807B648:
	pop {r0}
	bx r0
_0807B64C:
	.4byte gRam
	THUMB_FUNC_END sub_0807B634

