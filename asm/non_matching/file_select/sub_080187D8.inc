	THUMB_FUNC_START sub_080187D8
sub_080187D8: @ 0x080187D8
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _080187EC
	sub r0, r0, #1
	strb r0, [r4, #23]
	mov r0, #12
	strb r0, [r4, #24]
	b _08018830
_080187EC:
	add r0, r4, #0
	bl 0x08003828
	add r0, r4, #0
	add r0, r0, #41
	ldrb r0, [r0]
	mov r1, #1
	and r1, r1, r0
	ldrb r0, [r4, #24]
	sub r0, r0, r1
	strb r0, [r4, #24]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08018830
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	ldr r1, [r4, #88]
	cmp r1, #0
	beq _0801881C
	add r0, r4, #0
	bl sub_0803CECC
	b _08018824
_0801881C:
	bl 0x0800099C
	mov r1, #31
	and r0, r0, r1
_08018824:
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	bl sub_0804C9C8
_08018830:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080187D8

	.byte 0x00
	.byte 0x00
