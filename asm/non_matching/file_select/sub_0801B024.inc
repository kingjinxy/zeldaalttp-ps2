	THUMB_FUNC_START sub_0801B024
sub_0801B024: @ 0x0801B024
	push {r4,r5,lr}
	add r5, r0, #0
	mov r0, #15
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _0801B06C
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0803D3D0
	ldr r1, _0801B0B8  @ =gUnknown_08139F28
	add r2, r5, #0
	add r2, r2, #42
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r3, [r4, #50]
	add r0, r0, r3
	strh r0, [r4, #50]
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r4, #54]
	add r0, r0, r1
	strh r0, [r4, #54]
_0801B06C:
	mov r0, #15
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _0801B0B2
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0803D3D0
	ldr r2, _0801B0B8  @ =gUnknown_08139F28
	add r1, r5, #0
	add r1, r1, #42
	ldrb r0, [r1]
	lsl r0, r0, #2
	add r0, r0, #2
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r3, [r4, #50]
	add r0, r0, r3
	strh r0, [r4, #50]
	ldrb r0, [r1]
	lsl r0, r0, #2
	add r0, r0, #3
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r4, #54]
	add r0, r0, r1
	strh r0, [r4, #54]
_0801B0B2:
	pop {r4,r5}
	pop {r0}
	bx r0
_0801B0B8:
	.4byte gUnknown_08139F28
	THUMB_FUNC_END sub_0801B024

