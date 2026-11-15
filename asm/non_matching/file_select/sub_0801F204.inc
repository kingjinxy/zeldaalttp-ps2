	THUMB_FUNC_START sub_0801F204
sub_0801F204: @ 0x0801F204
	push {lr}
	add r3, r0, #0
	add r1, r3, #0
	add r1, r1, #116
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #0
	bne _0801F238
	mov r0, #2
	strb r0, [r3, #20]
	add r2, r3, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	add r0, r3, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r0, r3, #0
	bl 0x08003870
	b _0801F250
_0801F238:
	cmp r0, #90
	bne _0801F24A
	ldrb r0, [r3, #28]
	mov r1, #4
	neg r1, r1
	and r1, r1, r0
	mov r0, #1
	orr r1, r1, r0
	strb r1, [r3, #28]
_0801F24A:
	add r0, r3, #0
	bl 0x08003828
_0801F250:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801F204

