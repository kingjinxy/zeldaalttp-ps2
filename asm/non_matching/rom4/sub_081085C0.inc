	THUMB_FUNC_START sub_081085C0
sub_081085C0: @ 0x081085C0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _08108604  @ =gRam
	ldr r1, _08108608  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _0810864C
	add r0, r5, #0
	mov r1, #31
	bl sub_080C2CB4
	ldr r2, _0810860C  @ =0x00000F22
	add r0, r4, r2
	add r3, r5, r0
	ldrb r2, [r3]
	ldr r0, _08108610  @ =0x00000961
	add r1, r4, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r2, r0
	beq _08108618
	ldrb r0, [r1]
	sub r0, r2, r0
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _08108614
	sub r0, r2, #1
	b _08108616
	.byte 0x00
	.byte 0x00
_08108604:
	.4byte gRam
_08108608:
	.4byte 0x00000996
_0810860C:
	.4byte 0x00000F22
_08108610:
	.4byte 0x00000961
_08108614:
	add r0, r2, #1
_08108616:
	strb r0, [r3]
_08108618:
	ldr r0, _08108640  @ =gRam
	ldr r2, _08108644  @ =0x00000F12
	add r1, r0, r2
	add r3, r5, r1
	ldrb r2, [r3]
	mov r4, #150
	lsl r4, r4, #4
	add r1, r0, r4
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r2, r0
	beq _0810864C
	ldrb r0, [r1]
	sub r0, r2, r0
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _08108648
	sub r0, r2, #1
	b _0810864A
_08108640:
	.4byte gRam
_08108644:
	.4byte 0x00000F12
_08108648:
	add r0, r2, #1
_0810864A:
	strb r0, [r3]
_0810864C:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081085C0

	.byte 0x00
	.byte 0x00
