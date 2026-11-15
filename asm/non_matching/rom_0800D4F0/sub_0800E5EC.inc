	THUMB_FUNC_START sub_0800E5EC
sub_0800E5EC: @ 0x0800E5EC
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #2
	beq _0800E610
	cmp r0, #2
	bgt _0800E5FE
	cmp r0, #1
	beq _0800E61E
	b _0800E636
_0800E5FE:
	cmp r0, #3
	bne _0800E636
	mov r0, #101
	strh r0, [r1]
	mov r0, #102
	strh r0, [r1, #2]
	mov r0, #105
	strh r0, [r1, #42]
	sub r1, r1, #64
_0800E610:
	mov r0, #99
	strh r0, [r1]
	mov r0, #100
	strh r0, [r1, #2]
	mov r0, #105
	strh r0, [r1, #42]
	sub r1, r1, #64
_0800E61E:
	ldr r2, _0800E638  @ =0x00000467
	add r0, r2, #0
	strh r0, [r1]
	mov r2, #103
	add r0, r1, #0
	add r0, r0, #38
_0800E62A:
	strh r2, [r0, #2]
	sub r0, r0, #2
	cmp r0, r1
	bge _0800E62A
	mov r0, #104
	strh r0, [r1, #42]
_0800E636:
	bx lr
_0800E638:
	.4byte 0x00000467
	THUMB_FUNC_END sub_0800E5EC

