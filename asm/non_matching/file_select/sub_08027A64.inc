	THUMB_FUNC_START sub_08027A64
sub_08027A64: @ 0x08027A64
	push {r4,lr}
	add r4, r0, #0
	ldr r1, _08027ABC  @ =gUnknown_0201F000
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r4, #96]
	ldr r0, [r0]
	and r0, r0, r1
	cmp r0, r1
	bne _08027AB6
	mov r0, #2
	strb r0, [r4, #20]
	mov r0, #8
	strb r0, [r4, #24]
	ldrb r0, [r4, #11]
	cmp r0, #1
	bne _08027A8E
	mov r0, #0
	str r0, [r4, #96]
_08027A8E:
	add r0, r4, #0
	bl sub_08027C14
	add r2, r4, #0
	add r2, r2, #42
	add r0, r4, #0
	add r0, r0, #120
	ldrb r0, [r0]
	ldrb r1, [r2]
	add r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r2]
	ldrb r1, [r2]
	add r0, r4, #0
	bl sub_08003870
	mov r0, #87
	bl sub_08003DFC
_08027AB6:
	pop {r4}
	pop {r0}
	bx r0
_08027ABC:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08027A64

