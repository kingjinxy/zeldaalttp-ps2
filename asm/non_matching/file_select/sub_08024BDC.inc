	THUMB_FUNC_START sub_08024BDC
sub_08024BDC: @ 0x08024BDC
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	add r5, r0, #0
	bl 0x0800099C
	ldr r1, _08024C3C  @ =gUnknown_03006C80
	mov r9, r1
	ldrb r1, [r1]
	bl __umodsi3
	add r0, r0, #7
	mov r6, #15
	mov r2, #15
	mov r8, r2
	add r1, r0, #0
	and r1, r1, r6
	mov r7, #16
	neg r7, r7
	lsl r2, r0, #4
	orr r2, r2, r1
	strb r2, [r5, #30]
	add r0, r5, #0
	add r0, r0, #110
	ldrh r0, [r0]
	cmp r0, #0
	beq _08024C40
	bl 0x0800099C
	ldr r4, [r5, #112]
	mov r2, r9
	ldrb r1, [r2]
	bl __umodsi3
	add r0, r0, #7
	lsl r3, r0, #4
	ldrb r2, [r4, #30]
	add r1, r6, #0
	and r1, r1, r2
	orr r1, r1, r3
	and r0, r0, r6
	mov r2, r8
	and r0, r0, r2
	and r1, r1, r7
	orr r1, r1, r0
	strb r1, [r4, #30]
	b _08024C5C
_08024C3C:
	.4byte gUnknown_03006C80
_08024C40:
	ldr r4, [r5, #112]
	lsl r1, r2, #28
	lsr r1, r1, #28
	lsl r3, r1, #4
	ldrb r2, [r4, #30]
	add r0, r6, #0
	and r0, r0, r2
	orr r0, r0, r3
	and r1, r1, r6
	mov r2, r8
	and r1, r1, r2
	and r0, r0, r7
	orr r0, r0, r1
	strb r0, [r4, #30]
_08024C5C:
	ldr r2, [r5, #112]
	ldrb r1, [r2, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2, #28]
	add r0, r5, #0
	mov r1, #4
	bl 0x08003870
	ldr r0, [r5, #112]
	mov r1, #5
	bl 0x08003870
	mov r0, #162
	bl 0x08003DFC
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08024BDC

	.byte 0x00
	.byte 0x00
