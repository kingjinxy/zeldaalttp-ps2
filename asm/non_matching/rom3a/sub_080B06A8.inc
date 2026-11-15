	THUMB_FUNC_START sub_080B06A8
sub_080B06A8: @ 0x080B06A8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	mov r6, #0
	ldr r4, _080B06C8  @ =gRam
	ldr r0, _080B06CC  @ =0x00000E1F
	add r5, r4, r0
	ldrb r2, [r5]
	add r0, r2, #0
	cmp r0, #0
	beq _080B06D0
	cmp r0, #3
	bne _080B0710
	b _080B0974
	.byte 0x00
	.byte 0x00
_080B06C8:
	.4byte gRam
_080B06CC:
	.4byte 0x00000E1F
_080B06D0:
	ldr r1, _080B06FC  @ =0x00001832
	add r3, r4, r1
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080B070C
	add r0, r2, #1
	strb r0, [r5]
	ldr r1, _080B0700  @ =gUnknown_0816E908
	ldrb r0, [r5]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r3]
	ldr r2, _080B0704  @ =0x00001813
	add r0, r4, r2
	strb r6, [r0]
	ldr r3, _080B0708  @ =0x00000A88
	add r0, r4, r3
	strb r6, [r0]
	b _080B0852
_080B06FC:
	.4byte 0x00001832
_080B0700:
	.4byte gUnknown_0816E908
_080B0704:
	.4byte 0x00001813
_080B0708:
	.4byte 0x00000A88
_080B070C:
	mov r0, #0
	b _080B0810
_080B0710:
	cmp r0, #1
	beq _080B0716
	b _080B0824
_080B0716:
	ldr r0, _080B073C  @ =0x00001832
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _080B0748
	add r0, r2, #1
	strb r0, [r5]
	ldr r1, _080B0740  @ =0x00000A88
	add r0, r4, r1
	strb r6, [r0]
	ldr r2, _080B0744  @ =0x00000DF7
	add r0, r4, r2
	strb r6, [r0]
	b _080B0852
	.byte 0x00
	.byte 0x00
_080B073C:
	.4byte 0x00001832
_080B0740:
	.4byte 0x00000A88
_080B0744:
	.4byte 0x00000DF7
_080B0748:
	cmp r0, #79
	beq _080B0750
	cmp r0, #143
	bne _080B0762
_080B0750:
	ldr r3, _080B07B8  @ =0x00001818
	add r1, r4, r3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #0
	mov r1, #39
	bl sub_080C19F8
_080B0762:
	ldr r0, _080B07BC  @ =gRam
	ldr r4, _080B07B8  @ =0x00001818
	add r1, r0, r4
	add r2, r6, r1
	ldrb r1, [r2]
	add r7, r0, #0
	cmp r1, #0
	beq _080B07A2
	ldr r1, _080B07C0  @ =0x00001827
	add r0, r7, r1
	add r1, r6, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	mov r3, #0
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080B07A2
	mov r0, #5
	strb r0, [r1]
	ldr r4, _080B07C4  @ =0x00000E29
	add r0, r7, r4
	add r1, r6, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bne _080B07A2
	strb r3, [r1]
	strb r3, [r2]
_080B07A2:
	ldr r1, _080B07C8  @ =0x00001813
	add r0, r7, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080B07CC
	mov r2, #150
	lsl r2, r2, #4
	add r1, r7, r2
	mov r0, #255
	b _080B07D4
_080B07B8:
	.4byte 0x00001818
_080B07BC:
	.4byte gRam
_080B07C0:
	.4byte 0x00001827
_080B07C4:
	.4byte 0x00000E29
_080B07C8:
	.4byte 0x00001813
_080B07CC:
	mov r3, #150
	lsl r3, r3, #4
	add r1, r7, r3
	mov r0, #1
_080B07D4:
	strb r0, [r1]
	ldr r2, _080B0818  @ =gRam
	ldr r4, _080B081C  @ =0x00000A88
	add r1, r2, r4
	add r1, r6, r1
	mov r3, #150
	lsl r3, r3, #4
	add r0, r2, r3
	ldrb r0, [r0]
	ldrb r4, [r1]
	add r0, r0, r4
	strb r0, [r1]
	ldrb r1, [r1]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080B07FC
	neg r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
_080B07FC:
	cmp r1, #8
	bne _080B080E
	ldr r1, _080B0820  @ =0x00001813
	add r0, r2, r1
	add r0, r6, r0
	ldrb r1, [r0]
	mov r2, #1
	eor r1, r1, r2
	strb r1, [r0]
_080B080E:
	add r0, r6, #0
_080B0810:
	mov r1, #0
	bl sub_080BF804
	b _080B0852
_080B0818:
	.4byte gRam
_080B081C:
	.4byte 0x00000A88
_080B0820:
	.4byte 0x00001813
_080B0824:
	cmp r0, #2
	bne _080B0852
	ldr r2, _080B0888  @ =0x00000A88
	add r1, r4, r2
	ldrb r0, [r1]
	cmp r0, #23
	bhi _080B0836
	add r0, r0, #1
	strb r0, [r1]
_080B0836:
	ldr r3, _080B088C  @ =0x00000DF7
	add r1, r4, r3
	ldrb r0, [r1]
	cmp r0, #15
	bhi _080B0844
	add r0, r0, #1
	strb r0, [r1]
_080B0844:
	mov r0, #0
	bl sub_080C1768
	mov r0, #0
	mov r1, #0
	bl sub_080BF804
_080B0852:
	mov r0, #12
	bl sub_080CF3A0
	add r0, r6, #0
	bl sub_080C177C
	ldr r2, _080B0890  @ =gRam
	ldr r4, _080B0894  @ =0x00000E1F
	add r0, r2, r4
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _080B08A4
	ldr r1, _080B0898  @ =0x00001818
	add r0, r2, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080B08A4
	ldr r3, _080B089C  @ =0x00000E29
	add r0, r2, r3
	add r0, r6, r0
	ldrb r0, [r0]
	add r0, r0, #1
	ldr r4, _080B08A0  @ =0x00000974
	add r1, r2, r4
	b _080B08AC
_080B0888:
	.4byte 0x00000A88
_080B088C:
	.4byte 0x00000DF7
_080B0890:
	.4byte gRam
_080B0894:
	.4byte 0x00000E1F
_080B0898:
	.4byte 0x00001818
_080B089C:
	.4byte 0x00000E29
_080B08A0:
	.4byte 0x00000974
_080B08A4:
	ldr r2, _080B08F4  @ =gRam
	ldr r0, _080B08F8  @ =0x00000974
	add r1, r2, r0
	mov r0, #0
_080B08AC:
	strb r0, [r1]
	add r7, r2, #0
	ldr r1, _080B08FC  @ =0x00000A92
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080B08CA
	mov r2, #255
	lsl r2, r2, #8
	add r0, r2, #0
	orr r1, r1, r0
_080B08CA:
	neg r0, r1
	lsl r0, r0, #16
	mov r3, #150
	lsl r3, r3, #4
	add r1, r7, r3
	lsr r0, r0, #16
	ldrh r4, [r1]
	add r0, r0, r4
	strh r0, [r1]
	ldr r1, _080B08F8  @ =0x00000974
	add r0, r7, r1
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080B0900
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	b _080B090E
_080B08F4:
	.4byte gRam
_080B08F8:
	.4byte 0x00000974
_080B08FC:
	.4byte 0x00000A92
_080B0900:
	ldr r2, _080B098C  @ =0x00000996
	add r0, r7, r2
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r4, r0, #26
_080B090E:
	ldr r5, _080B0990  @ =gUnknown_03003E74
	ldrh r0, [r5]
	ldr r3, _080B0994  @ =0x00000964
	add r1, r7, r3
	ldrh r1, [r1]
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r7
	mov r8, r2
	ldrh r2, [r2]
	ldr r3, _080B0998  @ =gUnknown_0816E90A
	add r3, r4, r3
	ldrb r3, [r3]
	mov r4, #232
	lsl r4, r4, #7
	mov r12, r4
	mov r4, r12
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
	ldr r1, _080B099C  @ =0x00000E1F
	add r0, r7, r1
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #2
	bne _080B0974
	mov r3, r8
	ldrh r2, [r3]
	ldr r0, _080B09A0  @ =0x0000FFEF
	cmp r2, r0
	bhi _080B0974
	cmp r2, #160
	bls _080B0974
	mov r0, #3
	strb r0, [r1]
	ldr r4, _080B09A4  @ =0x000009AD
	add r1, r7, r4
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080B09A8  @ =0x00001AC5
	add r0, r7, r1
	ldrb r1, [r0]
	ldr r2, _080B09AC  @ =0x000009B4
	add r0, r7, r2
	strb r1, [r0]
_080B0974:
	mov r0, #0
	bl sub_080B09B0
	bl sub_080B0AA4
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B098C:
	.4byte 0x00000996
_080B0990:
	.4byte gUnknown_03003E74
_080B0994:
	.4byte 0x00000964
_080B0998:
	.4byte gUnknown_0816E90A
_080B099C:
	.4byte 0x00000E1F
_080B09A0:
	.4byte 0x0000FFEF
_080B09A4:
	.4byte 0x000009AD
_080B09A8:
	.4byte 0x00001AC5
_080B09AC:
	.4byte 0x000009B4
	THUMB_FUNC_END sub_080B06A8

