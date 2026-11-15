	THUMB_FUNC_START sub_080168C8
sub_080168C8: @ 0x080168C8
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #24]
	sub r0, r0, #1
	strb r0, [r4, #24]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080168F0
	mov r0, #3
	strb r0, [r4, #20]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #4
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x08003870
	b _0801692E
_080168F0:
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08016922
	mov r0, #2
	strb r0, [r4, #20]
	bl 0x0800099C
	ldr r2, _08016934  @ =gUnknown_0813912C
	mov r1, #3
	and r1, r1, r0
	add r1, r1, r2
	ldrb r0, [r1]
	strb r0, [r4, #23]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #4
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x08003870
_08016922:
	add r0, r4, #0
	bl 0x0800963C
	add r0, r4, #0
	bl 0x08003828
_0801692E:
	pop {r4}
	pop {r0}
	bx r0
_08016934:
	.4byte gUnknown_0813912C
	THUMB_FUNC_END sub_080168C8

