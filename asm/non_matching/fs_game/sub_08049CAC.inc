	THUMB_FUNC_START sub_08049CAC
sub_08049CAC: @ 0x08049CAC
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #46
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #52]
	add r1, r2, #1
	str r1, [r0, #52]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #58]
	add r1, r2, #0
	sub r1, r1, #26
	ldrh r2, [r0, #58]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #58]
	ldr r0, [r7]
	ldr r1, _08049D7C  @ =gUnknown_0813F7A0
	str r1, [r0, #72]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #3
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #0
	bne _08049D88
	ldr r4, _08049D80  @ =gUnknown_03006A30
	bl sub_0800099C
	ldr r1, _08049D84  @ =gUnknown_03006C80
	ldrb r2, [r1]
	add r1, r2, #0
	bl __umodsi3
	add r2, r0, #0
	lsl r1, r2, #3
	add r1, r1, r0
	lsl r0, r1, #4
	add r1, r4, #0
	add r1, r1, #40
	add r0, r1, r0
	ldr r1, [r0]
	ldr r0, [r7]
	bl sub_0803CECC
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r0, [r7]
	mov r1, #192
	lsl r1, r1, #1
	str r1, [r0, #12]
	b _08049D90
_08049D7C:
	.4byte gUnknown_0813F7A0
_08049D80:
	.4byte gUnknown_03006A30
_08049D84:
	.4byte gUnknown_03006C80
_08049D88:
	ldr r0, [r7]
	mov r1, #224
	lsl r1, r1, #1
	str r1, [r0, #12]
_08049D90:
	ldr r0, [r7]
	mov r1, #0
	bl sub_08003870
	mov r0, #157
	bl sub_08003DFC
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08049CAC

	.byte 0x00
	.byte 0x00
