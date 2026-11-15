	THUMB_FUNC_START sub_080DF648
sub_080DF648: @ 0x080DF648
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r1, _080DF6EC  @ =gRam
	ldr r2, _080DF6F0  @ =0x000009DA
	add r0, r1, r2
	ldrb r0, [r0]
	add r6, r1, #0
	cmp r0, #21
	beq _080DF750
	ldr r3, _080DF6F4  @ =0x00000F52
	add r0, r6, r3
	add r0, r7, r0
	ldrb r1, [r0]
	sub r0, r1, #5
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bls _080DF67E
	add r0, r1, #0
	cmp r0, #11
	beq _080DF67E
	cmp r0, #12
	bne _080DF750
_080DF67E:
	ldr r1, _080DF6F8  @ =gUnknown_0816E2EC
	ldr r2, _080DF6FC  @ =0x00000F92
	add r0, r6, r2
	add r0, r7, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r3, [r0]
	ldr r1, _080DF700  @ =0x00001624
	add r0, r6, r1
	ldrb r0, [r0]
	mov r9, r0
	ldr r2, _080DF704  @ =0x00001625
	add r0, r6, r2
	ldrb r0, [r0]
	mov r8, r0
	ldr r2, _080DF708  @ =gUnknown_08173F38
	ldr r0, _080DF70C  @ =0x00000996
	add r0, r0, r6
	mov r12, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	mov r1, #255
	and r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	lsr r0, r0, #5
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	mov r1, r8
	lsl r0, r1, #8
	mov r2, r9
	orr r0, r0, r2
	sub r0, r0, #4
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r3, #255
	bne _080DF6CE
	mov r3, #5
_080DF6CE:
	ldr r0, _080DF710  @ =0x00001122
	add r1, r6, r0
	add r1, r7, r1
	mov r0, #7
	and r3, r3, r0
	lsl r0, r3, #1
	strb r0, [r1]
	mov r3, r12
	ldrb r1, [r3]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _080DF714
	sub r0, r2, r4
	b _080DF716
_080DF6EC:
	.4byte gRam
_080DF6F0:
	.4byte 0x000009DA
_080DF6F4:
	.4byte 0x00000F52
_080DF6F8:
	.4byte gUnknown_0816E2EC
_080DF6FC:
	.4byte 0x00000F92
_080DF700:
	.4byte 0x00001624
_080DF704:
	.4byte 0x00001625
_080DF708:
	.4byte gUnknown_08173F38
_080DF70C:
	.4byte 0x00000996
_080DF710:
	.4byte 0x00001122
_080DF714:
	add r0, r2, r5
_080DF716:
	lsl r0, r0, #16
	lsr r2, r0, #16
	ldr r0, _080DF75C  @ =0x00001624
	add r5, r6, r0
	strb r2, [r5]
	lsr r0, r2, #8
	ldr r1, _080DF760  @ =0x00001625
	add r4, r6, r1
	strb r0, [r4]
	ldr r2, _080DF764  @ =gUnknown_08176680
	ldr r1, _080DF768  @ =gUnknown_0816E294
	ldr r3, _080DF76C  @ =0x00000F92
	add r0, r6, r3
	add r0, r7, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r1, [r0]
	add r0, r7, #0
	mov r2, #4
	bl sub_080C9480
	mov r0, r9
	strb r0, [r5]
	mov r1, r8
	strb r1, [r4]
_080DF750:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080DF75C:
	.4byte 0x00001624
_080DF760:
	.4byte 0x00001625
_080DF764:
	.4byte gUnknown_08176680
_080DF768:
	.4byte gUnknown_0816E294
_080DF76C:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080DF648

