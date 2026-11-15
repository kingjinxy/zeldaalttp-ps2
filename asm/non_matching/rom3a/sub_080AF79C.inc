	THUMB_FUNC_START sub_080AF79C
sub_080AF79C: @ 0x080AF79C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r12, r0
	ldr r1, _080AF820  @ =gRam
	ldr r0, _080AF824  @ =0x000016CD
	add r0, r0, r1
	mov r8, r0
	mov r2, #0
	strb r2, [r0]
	ldr r3, _080AF828  @ =0x000016CE
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _080AF82C  @ =gUnknown_0816E888
	ldrb r0, [r0]
	ldr r5, _080AF830  @ =0x00000974
	add r5, r5, r1
	mov r10, r5
	strb r0, [r5]
	ldr r6, _080AF834  @ =0x00000975
	add r5, r1, r6
	strb r0, [r5]
	ldr r0, _080AF838  @ =0x00000978
	add r4, r1, r0
	mov r0, #3
	strb r0, [r4]
	ldr r2, _080AF83C  @ =0x00000979
	add r3, r1, r2
	mov r0, #2
	strb r0, [r3]
	ldr r2, _080AF840  @ =gUnknown_0816E889
	ldr r6, _080AF844  @ =0x00001A48
	add r0, r1, r6
	add r0, r0, r12
	ldrb r0, [r0]
	lsr r0, r0, #1
	add r0, r0, r2
	ldrb r2, [r0]
	mov r6, #150
	lsl r6, r6, #4
	add r0, r1, r6
	strb r2, [r0]
	mov r7, #1
	add r6, r1, #0
	mov r9, r2
	mov r2, r10
_080AF800:
	ldrb r0, [r4]
	mov r1, r9
	and r1, r1, r0
	cmp r1, #0
	beq _080AF85C
	ldrb r0, [r3]
	and r1, r1, r0
	cmp r1, #0
	beq _080AF850
	cmp r7, #1
	bne _080AF848
	mov r0, #0
	ldrsb r0, [r5, r0]
	neg r0, r0
	strb r0, [r5]
	b _080AF850
_080AF820:
	.4byte gRam
_080AF824:
	.4byte 0x000016CD
_080AF828:
	.4byte 0x000016CE
_080AF82C:
	.4byte gUnknown_0816E888
_080AF830:
	.4byte 0x00000974
_080AF834:
	.4byte 0x00000975
_080AF838:
	.4byte 0x00000978
_080AF83C:
	.4byte 0x00000979
_080AF840:
	.4byte gUnknown_0816E889
_080AF844:
	.4byte 0x00001A48
_080AF848:
	mov r0, #0
	ldrsb r0, [r2, r0]
	neg r0, r0
	strb r0, [r2]
_080AF850:
	cmp r7, #1
	beq _080AF8C4
	ldrb r0, [r2]
	mov r1, r8
	strb r0, [r1]
	b _080AF870
_080AF85C:
	lsl r0, r0, #2
	strb r0, [r4]
	ldrb r0, [r3]
	lsl r0, r0, #2
	strb r0, [r3]
	sub r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r0, #0
	bge _080AF800
_080AF870:
	mov r5, #0
	cmp r7, #1
	bne _080AF8DC
	ldr r2, _080AF8B8  @ =0x000016CE
	add r3, r6, r2
	ldrb r0, [r3]
	lsl r0, r0, #28
	ldr r5, _080AF8BC  @ =0x00001A46
	add r2, r6, r5
	add r2, r2, r12
	lsr r0, r0, #24
	ldrb r1, [r2]
	add r4, r0, r1
	lsl r1, r4, #16
	asr r1, r1, #16
	mov r7, #255
	lsl r7, r7, #8
	and r1, r1, r7
	neg r0, r1
	orr r0, r0, r1
	lsr r5, r0, #31
	strb r4, [r2]
	ldrb r0, [r3]
	lsr r4, r0, #4
	add r1, r4, #0
	cmp r1, #7
	ble _080AF8B2
	mov r2, #16
	neg r2, r2
	add r0, r2, #0
	orr r1, r1, r0
	lsl r0, r1, #24
	lsr r4, r0, #24
_080AF8B2:
	ldr r0, _080AF8C0  @ =0x00001A3E
	b _080AF91A
	.byte 0x00
	.byte 0x00
_080AF8B8:
	.4byte 0x000016CE
_080AF8BC:
	.4byte 0x00001A46
_080AF8C0:
	.4byte 0x00001A3E
_080AF8C4:
	ldr r1, _080AF8D4  @ =0x00000975
	add r0, r6, r1
	ldrb r1, [r0]
	ldr r2, _080AF8D8  @ =0x000016CE
	add r0, r6, r2
	strb r1, [r0]
	b _080AF870
	.byte 0x00
	.byte 0x00
_080AF8D4:
	.4byte 0x00000975
_080AF8D8:
	.4byte 0x000016CE
_080AF8DC:
	ldr r3, _080AFA8C  @ =0x000016CD
	add r2, r6, r3
	ldrb r0, [r2]
	lsl r0, r0, #28
	ldr r3, _080AFA90  @ =0x00001A46
	add r1, r6, r3
	add r1, r1, r12
	lsr r0, r0, #24
	ldrb r3, [r1]
	add r4, r0, r3
	lsl r0, r4, #16
	asr r0, r0, #16
	mov r7, #255
	lsl r7, r7, #8
	and r0, r0, r7
	cmp r0, #0
	beq _080AF900
	mov r5, #1
_080AF900:
	strb r4, [r1]
	ldrb r0, [r2]
	lsr r4, r0, #4
	add r1, r4, #0
	cmp r1, #7
	ble _080AF918
	mov r2, #16
	neg r2, r2
	add r0, r2, #0
	orr r1, r1, r0
	lsl r0, r1, #24
	lsr r4, r0, #24
_080AF918:
	ldr r0, _080AFA94  @ =0x00001A44
_080AF91A:
	add r3, r6, r0
	add r3, r3, r12
	ldrb r1, [r3]
	sub r0, r0, #2
	add r2, r6, r0
	add r2, r2, r12
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r0, r4, #24
	asr r0, r0, #24
	add r0, r0, r5
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r4, r1, #16
	strb r4, [r3]
	lsl r0, r4, #16
	asr r0, r0, #16
	and r0, r0, r7
	asr r0, r0, #8
	strb r0, [r2]
	ldrb r0, [r3]
	mov r1, #15
	and r1, r1, r0
	mov r2, #210
	lsl r2, r2, #5
	add r0, r6, r2
	add r0, r0, r12
	ldrb r0, [r0]
	cmp r1, r0
	bne _080AF98A
	ldr r3, _080AFA98  @ =0x00001A4A
	add r0, r6, r3
	add r0, r0, r12
	ldrb r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #23
	ldr r5, _080AFA9C  @ =0x0000195C
	add r1, r6, r5
	add r0, r0, r1
	ldrh r1, [r0]
	add r1, r1, #1
	strh r1, [r0]
	ldr r0, _080AFAA0  @ =0x00001705
	add r3, r6, r0
	ldrb r2, [r3]
	mov r1, #251
	add r0, r1, #0
	and r0, r0, r2
	strb r0, [r3]
	ldr r3, _080AFAA4  @ =0x000016FA
	add r2, r6, r3
	ldrb r0, [r2]
	and r1, r1, r0
	strb r1, [r2]
_080AF98A:
	ldr r5, _080AFAA8  @ =0x00001A3E
	add r0, r6, r5
	add r0, r0, r12
	ldrb r1, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r6, r2
	strb r1, [r0]
	ldr r3, _080AFAAC  @ =0x00001A3C
	add r0, r6, r3
	add r0, r0, r12
	ldrb r1, [r0]
	ldr r5, _080AFAB0  @ =0x00000961
	add r0, r6, r5
	strb r1, [r0]
	ldr r1, _080AFA94  @ =0x00001A44
	add r0, r6, r1
	add r0, r0, r12
	ldrb r1, [r0]
	add r2, r2, #4
	add r0, r6, r2
	strb r1, [r0]
	add r3, r3, #6
	add r0, r6, r3
	add r0, r0, r12
	ldrb r1, [r0]
	add r5, r5, #4
	add r0, r6, r5
	strb r1, [r0]
	mov r7, #15
	add r3, r6, #0
	ldr r0, _080AFAB4  @ =0x00000968
	add r4, r3, r0
	ldr r1, _080AFAB8  @ =gUnknown_0816E88D
	mov r9, r1
	ldr r2, _080AFABC  @ =0x00000FA2
	add r2, r2, r3
	mov r8, r2
	ldr r5, _080AFAC0  @ =gUnknown_0816E891
	mov r10, r5
_080AF9DA:
	mov r1, r8
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #8
	bls _080AFA72
	ldr r2, _080AFAC4  @ =0x00000EE2
	add r0, r6, r2
	add r0, r7, r0
	ldrb r0, [r0]
	strb r0, [r4]
	ldr r5, _080AFAC8  @ =0x00000F02
	add r0, r6, r5
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r2, _080AFACC  @ =0x00000969
	add r0, r6, r2
	strb r1, [r0]
	sub r5, r5, #48
	add r0, r6, r5
	add r0, r7, r0
	ldrb r0, [r0]
	ldr r1, _080AFAD0  @ =0x0000096C
	add r2, r6, r1
	strb r0, [r2]
	add r5, r5, #32
	add r0, r6, r5
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r5, _080AFAD4  @ =0x0000096D
	add r0, r6, r5
	strb r1, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r0, r6, r1
	ldrh r0, [r0]
	ldrh r1, [r4]
	sub r0, r0, r1
	add r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #31
	bhi _080AFA72
	sub r5, r5, #9
	add r0, r3, r5
	ldrh r0, [r0]
	ldrh r1, [r2]
	sub r0, r0, r1
	add r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #31
	bhi _080AFA72
	ldr r1, _080AFAD8  @ =0x00001072
	add r0, r3, r1
	add r0, r7, r0
	mov r1, #8
	strb r1, [r0]
	ldr r2, _080AFADC  @ =0x00001112
	add r1, r3, r2
	add r1, r7, r1
	ldr r5, _080AFAE0  @ =0x00001A48
	add r2, r3, r5
	add r2, r2, r12
	ldrb r0, [r2]
	lsr r0, r0, #1
	add r0, r0, r9
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080AFAE4  @ =0x00001102
	add r1, r3, r0
	add r1, r7, r1
	ldrb r0, [r2]
	lsr r0, r0, #1
	add r0, r0, r10
	ldrb r0, [r0]
	strb r0, [r1]
_080AFA72:
	sub r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r0, #0
	bge _080AF9DA
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AFA8C:
	.4byte 0x000016CD
_080AFA90:
	.4byte 0x00001A46
_080AFA94:
	.4byte 0x00001A44
_080AFA98:
	.4byte 0x00001A4A
_080AFA9C:
	.4byte 0x0000195C
_080AFAA0:
	.4byte 0x00001705
_080AFAA4:
	.4byte 0x000016FA
_080AFAA8:
	.4byte 0x00001A3E
_080AFAAC:
	.4byte 0x00001A3C
_080AFAB0:
	.4byte 0x00000961
_080AFAB4:
	.4byte 0x00000968
_080AFAB8:
	.4byte gUnknown_0816E88D
_080AFABC:
	.4byte 0x00000FA2
_080AFAC0:
	.4byte gUnknown_0816E891
_080AFAC4:
	.4byte 0x00000EE2
_080AFAC8:
	.4byte 0x00000F02
_080AFACC:
	.4byte 0x00000969
_080AFAD0:
	.4byte 0x0000096C
_080AFAD4:
	.4byte 0x0000096D
_080AFAD8:
	.4byte 0x00001072
_080AFADC:
	.4byte 0x00001112
_080AFAE0:
	.4byte 0x00001A48
_080AFAE4:
	.4byte 0x00001102
	THUMB_FUNC_END sub_080AF79C

