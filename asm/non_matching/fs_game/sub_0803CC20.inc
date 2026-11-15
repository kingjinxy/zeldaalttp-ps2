	THUMB_FUNC_START sub_0803CC20
sub_0803CC20: @ 0x0803CC20
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0803CC40
	b _0803CC90
_0803CC40:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, _0803CC98  @ =gUnknown_0813E4CC
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #43
	ldrb r3, [r4]
	lsl r4, r3, #3
	add r3, r4, #0
	lsl r4, r3, #1
	add r3, r2, r4
	mov r4, #0
	ldrsh r2, [r3, r4]
	ldr r3, [r7]
	ldr r4, [r3, #12]
	mul r2, r4, r2
	ldr r1, [r1, #48]
	add r2, r1, r2
	str r2, [r0, #48]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, _0803CC98  @ =gUnknown_0813E4CC
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #43
	ldrb r3, [r4]
	lsl r4, r3, #3
	add r3, r4, #0
	add r3, r3, #64
	add r4, r3, #0
	lsl r3, r4, #1
	add r4, r2, r3
	mov r3, #0
	ldrsh r2, [r4, r3]
	ldr r3, [r7]
	ldr r4, [r3, #12]
	mul r2, r4, r2
	ldr r1, [r1, #52]
	sub r2, r1, r2
	str r2, [r0, #52]
_0803CC90:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
_0803CC98:
	.4byte gUnknown_0813E4CC
	THUMB_FUNC_END sub_0803CC20

