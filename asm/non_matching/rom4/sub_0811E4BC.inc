	THUMB_FUNC_START sub_0811E4BC
sub_0811E4BC: @ 0x0811E4BC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r2, _0811E50C  @ =gRam
	ldr r1, _0811E510  @ =0x0000177A
	add r0, r2, r1
	ldrb r1, [r0]
	add r0, r7, #1
	cmp r1, r0
	bne _0811E524
	ldr r3, _0811E514  @ =0x00001791
	add r0, r2, r3
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0811E524
	ldr r4, _0811E518  @ =0x00001813
	add r0, r2, r4
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #3
	beq _0811E524
	ldr r1, _0811E51C  @ =0x000016D5
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811E524
	ldr r3, _0811E520  @ =0x00000E5B
	add r0, r2, r3
	add r0, r7, r0
	ldrb r0, [r0]
	bl sub_080C1984
	b _0811E568
_0811E50C:
	.4byte gRam
_0811E510:
	.4byte 0x0000177A
_0811E514:
	.4byte 0x00001791
_0811E518:
	.4byte 0x00001813
_0811E51C:
	.4byte 0x000016D5
_0811E520:
	.4byte 0x00000E5B
_0811E524:
	ldr r2, _0811E73C  @ =gRam
	ldr r4, _0811E740  @ =0x000015F7
	add r0, r2, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811E568
	ldr r1, _0811E744  @ =0x00000E47
	add r0, r2, r1
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811E568
	ldr r3, _0811E748  @ =0x00001818
	add r0, r2, r3
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811E562
	ldr r4, _0811E74C  @ =0x0000177A
	add r0, r2, r4
	ldrb r1, [r0]
	add r0, r7, #1
	cmp r1, r0
	bne _0811E568
	ldr r1, _0811E750  @ =0x00001791
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0811E568
_0811E562:
	ldr r1, _0811E754  @ =gUnknown_03003E74
	mov r0, #52
	strh r0, [r1]
_0811E568:
	add r0, r7, #0
	bl sub_080C17A8
	ldr r2, _0811E73C  @ =gRam
	ldr r3, _0811E758  @ =0x00000A92
	add r0, r2, r3
	add r0, r7, r0
	ldrb r1, [r0]
	cmp r1, #127
	bls _0811E584
	mov r4, #255
	lsl r4, r4, #8
	add r0, r4, #0
	orr r1, r1, r0
_0811E584:
	ldr r3, _0811E75C  @ =0x00000968
	add r0, r2, r3
	strh r1, [r0]
	cmp r1, #0
	beq _0811E5BC
	ldr r0, _0811E760  @ =0x0000FFFF
	cmp r1, r0
	beq _0811E5BC
	ldr r4, _0811E764  @ =0x00001813
	add r0, r2, r4
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #3
	beq _0811E5BC
	ldr r1, _0811E768  @ =0x00000A74
	add r0, r2, r1
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811E5BC
	ldr r3, _0811E76C  @ =0x00001723
	add r1, r2, r3
	mov r0, #0
	strb r0, [r1]
	sub r4, r4, #239
	add r1, r2, r4
	mov r0, #48
	strb r0, [r1]
_0811E5BC:
	ldr r1, _0811E73C  @ =gRam
	ldr r0, _0811E75C  @ =0x00000968
	add r3, r1, r0
	mov r4, #0
	ldrsh r2, [r3, r4]
	mov r4, #150
	lsl r4, r4, #4
	add r0, r1, r4
	ldrh r0, [r0]
	sub r0, r0, r2
	mov r4, #0
	strh r0, [r3]
	ldr r2, _0811E770  @ =0x00000964
	add r0, r1, r2
	ldrh r2, [r0]
	ldr r3, _0811E774  @ =0x0000096C
	add r0, r1, r3
	strh r2, [r0]
	mov r0, #151
	lsl r0, r0, #4
	add r3, r1, r0
	strb r4, [r3]
	ldr r4, _0811E778  @ =0x00001732
	add r2, r1, r4
	mov r0, #2
	strb r0, [r2]
	ldr r2, _0811E77C  @ =0x00001837
	add r0, r1, r2
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #26
	lsr r6, r0, #24
	add r4, r4, #2
	add r5, r1, r4
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r1
	mov r8, r0
	ldr r2, _0811E780  @ =0x000009D4
	add r2, r1, r2
	str r2, [sp, #4]
	ldr r4, _0811E754  @ =gUnknown_03003E74
	mov r9, r4
	mov r10, r3
_0811E614:
	mov r0, #0
	strb r0, [r5]
	strb r0, [r5, #1]
	ldr r0, _0811E784  @ =0xFFFFF234
	add r2, r5, r0
	ldr r0, _0811E788  @ =gUnknown_0817FA3C
	lsl r1, r6, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	mov r2, r8
	strh r0, [r2]
	ldr r3, _0811E78C  @ =0xFFFFF238
	add r2, r5, r3
	ldr r0, _0811E790  @ =gUnknown_0817FA54
	add r1, r1, r0
	ldrh r0, [r1]
	ldrh r2, [r2]
	add r0, r0, r2
	ldr r4, _0811E794  @ =0xFFFFF230
	add r1, r5, r4
	strh r0, [r1]
	mov r2, r9
	ldrh r0, [r2]
	ldrh r1, [r1]
	mov r3, r8
	ldrh r2, [r3]
	ldr r3, _0811E798  @ =gUnknown_0817FA30
	add r3, r6, r3
	ldrb r4, [r3]
	mov r3, #207
	and r3, r3, r4
	sub r4, r5, #2
	ldrb r4, [r4]
	orr r3, r3, r4
	add r4, r5, #0
	sub r4, r4, #16
	ldrb r4, [r4]
	orr r3, r3, r4
	lsl r3, r3, #8
	mov r4, #217
	orr r3, r3, r4
	ldrb r4, [r5, #1]
	str r4, [sp]
	bl sub_080C6368
	add r3, r0, #0
	ldr r4, _0811E79C  @ =0xFFFFF2A6
	add r0, r5, r4
	ldrh r0, [r0]
	cmp r0, #0
	bne _0811E6A0
	ldr r1, [sp, #4]
	ldrb r0, [r1]
	cmp r0, #179
	bne _0811E6A0
	ldrb r2, [r3, #5]
	lsl r0, r2, #28
	lsr r0, r0, #30
	add r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	lsl r0, r0, #2
	mov r4, #13
	neg r4, r4
	add r1, r4, #0
	and r2, r2, r1
	orr r2, r2, r0
	strb r2, [r3, #5]
_0811E6A0:
	mov r1, r9
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	mov r2, r10
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r2, #3
	and r2, r2, r1
	ldr r3, _0811E73C  @ =gRam
	mov r12, r3
	cmp r2, #0
	bne _0811E614
	ldr r4, _0811E764  @ =0x00001813
	add r0, r3, r4
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #3
	beq _0811E72A
	mov r4, #0
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	ldrh r0, [r0]
	add r0, r0, #100
	lsl r0, r0, #16
	mov r1, #170
	lsl r1, r1, #17
	cmp r0, r1
	bls _0811E6E6
	mov r4, #1
_0811E6E6:
	ldr r1, _0811E770  @ =0x00000964
	add r0, r3, r1
	ldrh r0, [r0]
	add r0, r0, #100
	lsl r0, r0, #16
	mov r1, #210
	lsl r1, r1, #17
	cmp r0, r1
	bls _0811E6FA
	mov r4, #1
_0811E6FA:
	cmp r4, #0
	beq _0811E72A
	ldr r0, _0811E7A0  @ =0x00000BC4
	add r0, r0, r12
	strb r2, [r0]
	ldr r0, _0811E7A4  @ =0x00000E15
	add r0, r0, r12
	add r0, r7, r0
	strb r2, [r0]
	ldr r3, _0811E74C  @ =0x0000177A
	add r3, r3, r12
	ldrb r1, [r3]
	add r0, r7, #1
	cmp r1, r0
	bne _0811E72A
	strb r2, [r3]
	ldr r3, _0811E750  @ =0x00001791
	add r3, r3, r12
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0811E72A
	strb r2, [r3]
_0811E72A:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811E73C:
	.4byte gRam
_0811E740:
	.4byte 0x000015F7
_0811E744:
	.4byte 0x00000E47
_0811E748:
	.4byte 0x00001818
_0811E74C:
	.4byte 0x0000177A
_0811E750:
	.4byte 0x00001791
_0811E754:
	.4byte gUnknown_03003E74
_0811E758:
	.4byte 0x00000A92
_0811E75C:
	.4byte 0x00000968
_0811E760:
	.4byte 0x0000FFFF
_0811E764:
	.4byte 0x00001813
_0811E768:
	.4byte 0x00000A74
_0811E76C:
	.4byte 0x00001723
_0811E770:
	.4byte 0x00000964
_0811E774:
	.4byte 0x0000096C
_0811E778:
	.4byte 0x00001732
_0811E77C:
	.4byte 0x00001837
_0811E780:
	.4byte 0x000009D4
_0811E784:
	.4byte 0xFFFFF234
_0811E788:
	.4byte gUnknown_0817FA3C
_0811E78C:
	.4byte 0xFFFFF238
_0811E790:
	.4byte gUnknown_0817FA54
_0811E794:
	.4byte 0xFFFFF230
_0811E798:
	.4byte gUnknown_0817FA30
_0811E79C:
	.4byte 0xFFFFF2A6
_0811E7A0:
	.4byte 0x00000BC4
_0811E7A4:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_0811E4BC

