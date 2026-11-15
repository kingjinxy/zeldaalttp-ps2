	THUMB_FUNC_START sub_081155A4
sub_081155A4: @ 0x081155A4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #32
	and r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #26
	lsl r1, r1, #24
	lsr r4, r1, #24
	ldr r2, _0811560C  @ =gRam
	ldr r3, _08115610  @ =0x00000969
	add r1, r2, r3
	mov r3, #0
	strb r0, [r1]
	mov r1, #3
	and r1, r1, r0
	ldr r5, _08115614  @ =0x00000968
	add r0, r2, r5
	strb r1, [r0]
	ldr r1, _08115618  @ =0x00001732
	add r0, r2, r1
	strb r3, [r0]
	add r3, r2, #0
	cmp r4, #8
	bne _08115648
	mov r4, #0
	ldr r2, _0811561C  @ =0x00001663
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #6
	beq _081155E6
	cmp r0, #1
	bne _08115648
_081155E6:
	mov r4, #8
	ldr r5, _08115620  @ =0x000017CA
	add r0, r3, r5
	ldr r2, _08115624  @ =0x000017CC
	add r1, r3, r2
	ldrh r2, [r0]
	ldrh r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _0811562C
	ldr r5, _08115628  @ =0x00000996
	add r0, r3, r5
	ldrb r0, [r0]
	mov r1, #16
	and r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #26
	b _08115638
	.byte 0x00
	.byte 0x00
_0811560C:
	.4byte gRam
_08115610:
	.4byte 0x00000969
_08115614:
	.4byte 0x00000968
_08115618:
	.4byte 0x00001732
_0811561C:
	.4byte 0x00001663
_08115620:
	.4byte 0x000017CA
_08115624:
	.4byte 0x000017CC
_08115628:
	.4byte 0x00000996
_0811562C:
	ldr r1, _08115644  @ =0x00000996
	add r0, r3, r1
	ldrb r0, [r0]
	and r4, r4, r0
	lsl r1, r4, #24
	lsr r1, r1, #25
_08115638:
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #8
	bl sub_0811571C
	b _08115710
_08115644:
	.4byte 0x00000996
_08115648:
	ldr r2, _081156C4  @ =0x000009AD
	add r0, r3, r2
	ldrb r1, [r0]
	cmp r1, #15
	beq _081156E4
	cmp r1, #8
	beq _081156E4
	cmp r1, #17
	beq _081156E4
	ldr r5, _081156C8  @ =0x00001663
	add r0, r3, r5
	ldrb r0, [r0]
	cmp r0, #11
	beq _081156EE
	sub r0, r0, #12
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _08115678
	ldr r2, _081156CC  @ =0x0000166A
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _081156B2
_08115678:
	ldr r5, _081156D0  @ =0x00001770
	add r0, r3, r5
	ldrb r0, [r0]
	cmp r0, #0
	bne _081156B2
	cmp r1, #11
	beq _081156B2
	ldr r2, _081156D4  @ =0x000009AC
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #9
	bne _08115694
	cmp r1, #35
	beq _081156B2
_08115694:
	cmp r0, #14
	bne _081156A0
	cmp r1, #1
	beq _081156B2
	cmp r1, #2
	beq _081156B2
_081156A0:
	ldr r5, _081156D8  @ =0x000016D6
	add r0, r3, r5
	ldr r2, _081156DC  @ =0x000016D7
	add r1, r3, r2
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	bne _081156E4
_081156B2:
	ldr r5, _081156E0  @ =0x00001732
	add r1, r3, r5
	mov r0, #4
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #4
	bl sub_0811571C
	b _08115710
_081156C4:
	.4byte 0x000009AD
_081156C8:
	.4byte 0x00001663
_081156CC:
	.4byte 0x0000166A
_081156D0:
	.4byte 0x00001770
_081156D4:
	.4byte 0x000009AC
_081156D8:
	.4byte 0x000016D6
_081156DC:
	.4byte 0x000016D7
_081156E0:
	.4byte 0x00001732
_081156E4:
	ldr r1, _081156F8  @ =0x00001804
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _081156FC
_081156EE:
	add r0, r4, #0
	bl sub_08115F14
	b _08115710
	.byte 0x00
	.byte 0x00
_081156F8:
	.4byte 0x00001804
_081156FC:
	ldr r2, _08115718  @ =0x00000996
	add r0, r3, r2
	ldrb r0, [r0]
	mov r1, #4
	and r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_0811571C
_08115710:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08115718:
	.4byte 0x00000996
	THUMB_FUNC_END sub_081155A4

