	THUMB_FUNC_START sub_080249CC
sub_080249CC: @ 0x080249CC
	push {r4-r7,lr}
	add r5, r0, #0
	ldr r3, [r5, #84]
	ldr r2, _08024A3C  @ =gUnknown_084276A2
	add r7, r5, #0
	add r7, r7, #41
	ldrb r0, [r7]
	lsr r0, r0, #4
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	strh r0, [r5, #58]
	strh r0, [r3, #58]
	ldrb r1, [r7]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08024A48
	mov r0, #13
	bl sub_08012494
	add r6, r0, #0
	cmp r6, #0
	beq _08024A68
	ldr r4, _08024A40  @ =gUnknown_03006A30
	bl sub_0800099C
	ldr r1, _08024A44  @ =gUnknown_03006C80
	ldrb r1, [r1]
	bl __umodsi3
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r4, r4, #40
	add r1, r1, r4
	ldr r1, [r1]
	add r0, r5, #0
	bl sub_0803CECC
	add r1, r6, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r5, #0
	add r1, r6, #0
	bl sub_0803D3D0
	mov r0, #0
	strb r0, [r7]
	mov r0, #165
	bl sub_08003DFC
	b _08024A68
_08024A3C:
	.4byte gUnknown_084276A2
_08024A40:
	.4byte gUnknown_03006A30
_08024A44:
	.4byte gUnknown_03006C80
_08024A48:
	lsl r0, r1, #24
	lsr r0, r0, #24
	cmp r0, #128
	bne _08024A68
	mov r0, #2
	strb r0, [r5, #20]
	bl sub_0800099C
	add r0, r0, #30
	mov r1, #15
	and r0, r0, r1
	strb r0, [r5, #23]
	add r0, r5, #0
	mov r1, #8
	bl sub_08003870
_08024A68:
	add r0, r5, #0
	add r0, r0, #60
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _08024A7A
	mov r0, #1
	strb r0, [r5, #20]
_08024A7A:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080249CC

