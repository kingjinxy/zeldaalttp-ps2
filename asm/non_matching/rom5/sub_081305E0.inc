	THUMB_FUNC_START sub_081305E0
sub_081305E0: @ 0x081305E0
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r1, _08130658  @ =gUnknown_0822BC38
	ldr r2, _0813065C  @ =gRam
	ldr r3, _08130660  @ =0x00000CAB
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	mov r7, #208
	lsl r7, r7, #4
	add r0, r0, r7
	mov r1, #4
	mov r4, #32
	ldr r6, _08130664  @ =gUnknown_02030000
	lsl r0, r0, #16
	lsr r3, r0, #16
	mov r0, #7
	mov r8, r0
	sub r7, r7, #96
	add r7, r7, r2
	mov r12, r7
	ldr r0, _08130668  @ =0x0000FF08
	mov r9, r0
_08130616:
	mov r2, r12
	ldrh r0, [r2]
	add r0, r4, r0
	mov r2, r8
	add r4, r4, #16
	sub r5, r1, #1
	cmp r2, #0
	blt _08130642
	lsl r0, r0, #1
	ldr r7, _0813066C  @ =gUnknown_02000800
	add r1, r0, r7
_0813062C:
	lsl r0, r3, #1
	add r0, r0, r6
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r3, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
	add r1, r1, #2
	sub r2, r2, #1
	cmp r2, #0
	bge _0813062C
_08130642:
	mov r0, #255
	and r0, r0, r3
	cmp r0, #0
	beq _08130678
	mov r0, #248
	and r0, r0, r3
	cmp r0, #248
	bne _08130670
	mov r0, r9
	and r3, r3, r0
	b _08130678
_08130658:
	.4byte gUnknown_0822BC38
_0813065C:
	.4byte gRam
_08130660:
	.4byte 0x00000CAB
_08130664:
	.4byte gUnknown_02030000
_08130668:
	.4byte 0x0000FF08
_0813066C:
	.4byte gUnknown_02000800
_08130670:
	add r0, r3, #0
	add r0, r0, #8
	lsl r0, r0, #16
	lsr r3, r0, #16
_08130678:
	add r1, r5, #0
	cmp r1, #0
	bge _08130616
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081305E0

	.byte 0x00
	.byte 0x00
