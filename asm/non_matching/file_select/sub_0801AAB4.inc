	THUMB_FUNC_START sub_0801AAB4
sub_0801AAB4: @ 0x0801AAB4
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #65
	ldrb r0, [r0]
	cmp r0, #149
	bne _0801AB40
	ldr r2, [r4, #76]
	add r0, r2, #0
	add r0, r0, #43
	ldrb r0, [r0]
	add r0, r0, #4
	mov r1, #24
	and r0, r0, r1
	mov r1, #16
	eor r0, r0, r1
	asr r1, r0, #3
	add r0, r4, #0
	add r0, r0, #42
	ldrb r0, [r0]
	cmp r1, r0
	bne _0801AB40
	mov r0, #1
	and r1, r1, r0
	cmp r1, #0
	beq _0801AB1A
	mov r1, #54
	ldrsh r0, [r2, r1]
	mov r3, #58
	ldrsh r1, [r2, r3]
	add r0, r0, r1
	mov r2, #54
	ldrsh r1, [r4, r2]
	sub r0, r0, r1
	mov r3, #58
	ldrsh r1, [r4, r3]
	sub r0, r0, r1
	add r0, r0, #8
	cmp r0, #16
	bhi _0801AB40
	add r1, r4, #0
	add r1, r1, #69
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	sub r1, r1, #8
	mov r0, #15
	strb r0, [r1]
	mov r0, #4
	bl 0x08003DFC
	b _0801AB40
_0801AB1A:
	mov r1, #50
	ldrsh r0, [r2, r1]
	mov r2, #50
	ldrsh r1, [r4, r2]
	sub r0, r0, r1
	add r0, r0, #8
	cmp r0, #16
	bhi _0801AB40
	add r1, r4, #0
	add r1, r1, #69
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	sub r1, r1, #8
	mov r0, #15
	strb r0, [r1]
	mov r0, #4
	bl 0x08003DFC
_0801AB40:
	ldr r1, _0801AB50  @ =gUnknown_08139EF4
	add r0, r4, #0
	bl 0x080098A0
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801AB50:
	.4byte gUnknown_08139EF4
	THUMB_FUNC_END sub_0801AAB4

