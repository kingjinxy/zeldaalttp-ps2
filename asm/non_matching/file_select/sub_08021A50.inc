	THUMB_FUNC_START sub_08021A50
sub_08021A50: @ 0x08021A50
	push {r4,lr}
	add r4, r0, #0
	bl sub_08022D50
	ldrb r0, [r4, #10]
	cmp r0, #2
	bne _08021A68
	add r0, r4, #0
	add r0, r0, #121
	ldrb r0, [r0]
	cmp r0, #15
	bne _08021B12
_08021A68:
	add r0, r4, #0
	bl 0x08003828
	add r2, r4, #0
	add r2, r2, #112
	ldrh r0, [r2]
	cmp r0, #0
	beq _08021A7C
	sub r0, r0, #1
	strh r0, [r2]
_08021A7C:
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	cmp r1, #0
	bne _08021ABA
	add r0, r4, #0
	bl sub_0803CC20
	mov r1, #128
	lsl r1, r1, #6
	add r0, r4, #0
	bl 0x08003594
	cmp r0, #0
	bne _08021AAA
	add r1, r4, #0
	add r1, r1, #40
	mov r0, #1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080229CC
	b _08021B0C
_08021AAA:
	ldr r0, [r4, #16]
	cmp r0, #0
	bne _08021B0C
	add r1, r4, #0
	add r1, r1, #40
	mov r0, #1
	strb r0, [r1]
	b _08021B0C
_08021ABA:
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08021B0C
	ldrh r0, [r2]
	cmp r0, #0
	beq _08021ADE
	ldrb r0, [r4, #10]
	cmp r0, #2
	bne _08021AD6
	add r1, r4, #0
	add r1, r1, #121
	mov r0, #0
	strb r0, [r1]
_08021AD6:
	add r0, r4, #0
	bl sub_08022BB8
	b _08021B0C
_08021ADE:
	ldrb r0, [r4, #24]
	sub r0, r0, #1
	strb r0, [r4, #24]
	lsl r0, r0, #24
	cmp r0, #0
	beq _08021B06
	mov r0, #13
	strb r0, [r4, #20]
	mov r0, #180
	strh r0, [r2]
	ldrb r0, [r4, #10]
	sub r0, r0, #1
	lsl r1, r0, #2
	add r1, r1, r0
	lsl r1, r1, #25
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x08003870
	b _08021B0C
_08021B06:
	add r0, r4, #0
	bl sub_08022A7C
_08021B0C:
	add r0, r4, #0
	bl sub_08022C24
_08021B12:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08021A50

