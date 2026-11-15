	THUMB_FUNC_START sub_08010104
sub_08010104: @ 0x08010104
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	sub sp, sp, #32
	add r5, r0, #0
	mov r8, r1
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r1, _0801016C  @ =gUnknown_02016D60
	add r2, r1, #0
	add r2, r2, #35
	mov r0, #1
	strb r0, [r2]
	mov r0, #180
	strh r0, [r1, #4]
	ldr r0, _08010170  @ =gUnknown_08137F04
	ldr r2, _08010174  @ =0x04000006
	mov r1, sp
	bl CpuSet
	mov r1, sp
	ldr r6, _08010178  @ =gUnknown_08137F1C
	lsl r4, r5, #1
	add r4, r4, r5
	lsl r4, r4, #1
	add r0, r4, r6
	ldrh r0, [r0]
	strb r0, [r1, #18]
	add r5, sp, #24
	mov r0, r8
	add r1, r5, #0
	bl sub_0800EC08
	str r5, [sp, #12]
	add r0, r6, #2
	add r0, r4, r0
	ldrh r0, [r0]
	mov r1, sp
	bl sub_0800F4C4
	add r6, r6, #4
	add r4, r4, r6
	ldrh r0, [r4]
	bl play_sound
	add sp, sp, #32
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801016C:
	.4byte gUnknown_02016D60
_08010170:
	.4byte gUnknown_08137F04
_08010174:
	.4byte 0x04000006
_08010178:
	.4byte gUnknown_08137F1C
	THUMB_FUNC_END sub_08010104

