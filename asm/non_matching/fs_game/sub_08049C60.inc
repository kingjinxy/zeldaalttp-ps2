	THUMB_FUNC_START sub_08049C60
sub_08049C60: @ 0x08049C60
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #0
	beq _08049C8C
	ldr r0, _08049C88  @ =gUnknown_0813F74C
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	b _08049CA0
	.byte 0x00
	.byte 0x00
_08049C88:
	.4byte gUnknown_0813F74C
_08049C8C:
	ldr r0, _08049CA8  @ =gUnknown_0813F744
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
_08049CA0:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08049CA8:
	.4byte gUnknown_0813F744
	THUMB_FUNC_END sub_08049C60

