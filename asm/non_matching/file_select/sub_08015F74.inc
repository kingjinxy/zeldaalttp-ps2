	THUMB_FUNC_START sub_08015F74
sub_08015F74: @ 0x08015F74
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r4, r4, #16
	lsr r4, r4, #16
	ldr r6, _08015FCC  @ =gUnknown_02038000
	mov r1, #128
	lsl r1, r1, #7
	add r0, r6, #0
	bl zero_memory
	ldr r0, _08015FD0  @ =gUnknown_08146090
	lsl r4, r4, #2
	add r4, r4, r0
	ldr r0, [r4]
	mov r1, #0
	bl sub_0801484C
	ldr r0, _08015FD4  @ =gUnknown_0201F024
	ldr r4, _08015FD8  @ =gUnknown_03000450
	ldrh r2, [r4, #40]
	lsr r2, r2, #4
	ldrh r3, [r4, #42]
	lsr r3, r3, #4
	mov r1, #128
	lsl r1, r1, #8
	add r5, r1, #0
	orr r3, r3, r5
	add r1, r6, #0
	bl sub_0800BAE4
	ldr r0, _08015FDC  @ =gUnknown_0200B324
	ldr r1, _08015FE0  @ =gUnknown_0203A000
	ldrh r2, [r4, #40]
	lsr r2, r2, #4
	ldrh r3, [r4, #42]
	lsr r3, r3, #4
	orr r3, r3, r5
	bl sub_0800BAE4
	bl sub_080160F8
	pop {r4-r6}
	pop {r0}
	bx r0
_08015FCC:
	.4byte gUnknown_02038000
_08015FD0:
	.4byte gUnknown_08146090
_08015FD4:
	.4byte gUnknown_0201F024
_08015FD8:
	.4byte gUnknown_03000450
_08015FDC:
	.4byte gUnknown_0200B324
_08015FE0:
	.4byte gUnknown_0203A000
	THUMB_FUNC_END sub_08015F74

