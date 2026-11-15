	THUMB_FUNC_START sub_080C7490
sub_080C7490: @ 0x080C7490
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	lsl r7, r1, #24
	ldr r1, _080C7524  @ =gRam
	ldr r2, _080C7528  @ =0x000009B2
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r5, r1, #0
	cmp r0, #0
	beq _080C7550
	ldr r3, _080C752C  @ =0x00001624
	add r0, r5, r3
	ldrb r1, [r0]
	ldr r2, _080C7530  @ =0x00001625
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	add r1, r1, #8
	ldr r6, _080C7534  @ =0x000001FF
	ldr r2, _080C7538  @ =gUnknown_0822A8CC
	lsr r0, r7, #25
	lsl r3, r0, #1
	add r2, r3, r2
	and r1, r1, r6
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	ldr r7, _080C753C  @ =0xFFF80000
	add r1, r1, r7
	lsr r2, r1, #16
	mov r7, #150
	lsl r7, r7, #4
	add r0, r5, r7
	strb r2, [r0]
	lsr r1, r1, #24
	add r7, r7, #1
	add r0, r5, r7
	strb r1, [r0]
	cmp r2, r6
	bls _080C74EA
	b _080C77EC
_080C74EA:
	ldr r1, _080C7540  @ =0x00001622
	add r0, r5, r1
	ldrb r0, [r0]
	ldr r2, _080C7544  @ =0x00001623
	add r1, r5, r2
	ldrb r1, [r1]
	lsl r1, r1, #8
	orr r0, r0, r1
	add r0, r0, #8
	ldr r1, _080C7548  @ =gUnknown_0822A860
	add r1, r3, r1
	and r0, r0, r6
	ldrh r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	ldr r3, _080C753C  @ =0xFFF80000
	add r0, r0, r3
	lsr r3, r0, #16
	add r7, r7, #3
	add r1, r5, r7
	strb r3, [r1]
	lsr r0, r0, #24
	ldr r2, _080C754C  @ =0x00000965
	add r1, r5, r2
	strb r0, [r1]
	cmp r3, r6
	bls _080C75F0
	b _080C77EC
	.byte 0x00
	.byte 0x00
_080C7524:
	.4byte gRam
_080C7528:
	.4byte 0x000009B2
_080C752C:
	.4byte 0x00001624
_080C7530:
	.4byte 0x00001625
_080C7534:
	.4byte 0x000001FF
_080C7538:
	.4byte gUnknown_0822A8CC
_080C753C:
	.4byte 0xFFF80000
_080C7540:
	.4byte 0x00001622
_080C7544:
	.4byte 0x00001623
_080C7548:
	.4byte gUnknown_0822A860
_080C754C:
	.4byte 0x00000965
_080C7550:
	ldr r3, _080C7630  @ =0x00001624
	add r0, r5, r3
	ldrb r0, [r0]
	ldr r2, _080C7634  @ =0x00001625
	add r1, r5, r2
	ldrb r3, [r1]
	lsl r3, r3, #8
	ldr r2, _080C7638  @ =gUnknown_0822A8CC
	lsr r1, r7, #25
	lsl r6, r1, #1
	add r2, r6, r2
	orr r0, r0, r3
	ldrh r2, [r2]
	add r0, r0, r2
	lsl r0, r0, #16
	lsr r2, r0, #16
	mov r3, #150
	lsl r3, r3, #4
	add r1, r5, r3
	strb r2, [r1]
	lsr r0, r0, #24
	ldr r7, _080C763C  @ =0x00000961
	add r1, r5, r7
	strb r0, [r1]
	ldr r1, _080C7640  @ =0x00001602
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r3, _080C7644  @ =0x00001603
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r2, r1
	lsl r1, r1, #16
	lsr r2, r1, #16
	ldr r7, _080C7648  @ =0x000015FE
	add r0, r5, r7
	ldrh r0, [r0]
	cmp r2, r0
	bcc _080C75A2
	b _080C77EC
_080C75A2:
	ldr r1, _080C764C  @ =0x00001622
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _080C7650  @ =0x00001623
	add r0, r5, r2
	ldrb r2, [r0]
	lsl r2, r2, #8
	ldr r0, _080C7654  @ =gUnknown_0822A860
	add r0, r6, r0
	orr r1, r1, r2
	ldrh r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r3, r1, #16
	ldr r7, _080C7658  @ =0x00000964
	add r0, r5, r7
	strb r3, [r0]
	lsr r1, r1, #24
	ldr r2, _080C765C  @ =0x00000965
	add r0, r5, r2
	strb r1, [r0]
	mov r7, #176
	lsl r7, r7, #5
	add r0, r5, r7
	ldrb r1, [r0]
	ldr r2, _080C7660  @ =0x00001601
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r3, r1
	lsl r1, r1, #16
	lsr r3, r1, #16
	sub r7, r7, #4
	add r0, r5, r7
	ldrh r0, [r0]
	cmp r3, r0
	bcc _080C75F0
	b _080C77EC
_080C75F0:
	add r0, r4, #0
	bl sub_080C7AF8
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r5, _080C7664  @ =gRam
	ldr r1, _080C7668  @ =0x00000E75
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _080C7694
	ldr r0, _080C766C  @ =gUnknown_08172370
	add r0, r3, r0
	ldrb r2, [r0]
	cmp r2, #4
	bne _080C7678
	ldr r3, _080C7670  @ =0x000009B2
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080C7626
	b _080C7808
_080C7626:
	ldr r7, _080C7674  @ =0x00001062
	add r0, r5, r7
	add r0, r4, r0
	strb r2, [r0]
	b _080C7808
_080C7630:
	.4byte 0x00001624
_080C7634:
	.4byte 0x00001625
_080C7638:
	.4byte gUnknown_0822A8CC
_080C763C:
	.4byte 0x00000961
_080C7640:
	.4byte 0x00001602
_080C7644:
	.4byte 0x00001603
_080C7648:
	.4byte 0x000015FE
_080C764C:
	.4byte 0x00001622
_080C7650:
	.4byte 0x00001623
_080C7654:
	.4byte gUnknown_0822A860
_080C7658:
	.4byte 0x00000964
_080C765C:
	.4byte 0x00000965
_080C7660:
	.4byte 0x00001601
_080C7664:
	.4byte gRam
_080C7668:
	.4byte 0x00000E75
_080C766C:
	.4byte gUnknown_08172370
_080C7670:
	.4byte 0x000009B2
_080C7674:
	.4byte 0x00001062
_080C7678:
	cmp r2, #0
	bne _080C767E
	b _080C7808
_080C767E:
	ldr r1, _080C7690  @ =0x000015E2
	add r0, r5, r1
	ldrh r0, [r0]
	sub r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #3
	bls _080C773C
	b _080C7814
_080C7690:
	.4byte 0x000015E2
_080C7694:
	ldr r2, _080C76D8  @ =0x000011B2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080C7706
	ldr r7, _080C76DC  @ =0x00000FF2
	add r0, r5, r7
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #210
	beq _080C76B6
	cmp r0, #138
	bne _080C76BC
_080C76B6:
	cmp r3, #9
	bne _080C76BC
	b _080C7808
_080C76BC:
	ldr r1, _080C76E0  @ =gRam
	ldr r2, _080C76DC  @ =0x00000FF2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #148
	bne _080C76E8
	ldr r5, _080C76E4  @ =0x00001062
	add r0, r1, r5
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C76F8
	b _080C7706
_080C76D8:
	.4byte 0x000011B2
_080C76DC:
	.4byte 0x00000FF2
_080C76E0:
	.4byte gRam
_080C76E4:
	.4byte 0x00001062
_080C76E8:
	cmp r0, #227
	beq _080C76F8
	cmp r0, #140
	beq _080C76F8
	cmp r0, #154
	beq _080C76F8
	cmp r0, #129
	bne _080C7706
_080C76F8:
	cmp r3, #8
	bne _080C76FE
	b _080C7808
_080C76FE:
	cmp r3, #9
	bne _080C7704
	b _080C7808
_080C7704:
	b _080C7814
_080C7706:
	ldr r0, _080C7748  @ =gUnknown_08172270
	add r0, r3, r0
	ldrb r2, [r0]
	ldr r1, _080C774C  @ =gRam
	ldr r7, _080C7750  @ =0x00000FF2
	add r0, r1, r7
	add r0, r4, r0
	ldrb r0, [r0]
	add r5, r1, #0
	cmp r0, #167
	bne _080C7726
	cmp r3, #8
	beq _080C7724
	cmp r3, #10
	bne _080C7726
_080C7724:
	mov r2, #1
_080C7726:
	cmp r2, #0
	beq _080C7808
	ldr r1, _080C7754  @ =0x000015E2
	add r0, r5, r1
	ldrh r1, [r0]
	add r0, r1, #0
	sub r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #3
	bhi _080C7758
_080C773C:
	bl sub_080C7948
	lsl r0, r0, #24
	lsr r0, r0, #24
	b _080C7816
	.byte 0x00
	.byte 0x00
_080C7748:
	.4byte gUnknown_08172270
_080C774C:
	.4byte gRam
_080C7750:
	.4byte 0x00000FF2
_080C7754:
	.4byte 0x000015E2
_080C7758:
	lsl r0, r1, #16
	lsr r0, r0, #16
	cmp r0, #68
	beq _080C7790
	cmp r0, #32
	bne _080C7814
	ldr r2, _080C7788  @ =0x00000D84
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080C7814
	mov r1, #0
	ldr r3, _080C778C  @ =0x00001072
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C7784
	mov r1, #1
_080C7784:
	add r0, r1, #0
	b _080C7816
_080C7788:
	.4byte 0x00000D84
_080C778C:
	.4byte 0x00001072
_080C7790:
	ldr r7, _080C77DC  @ =0x00001072
	add r0, r5, r7
	add r7, r4, r0
	ldrb r0, [r7]
	cmp r0, #0
	beq _080C7814
	ldr r1, _080C77E0  @ =0x00000EB5
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080C7814
	ldr r2, _080C77E4  @ =0x00000D84
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _080C77C8
	add r0, r4, #0
	mov r1, #4
	bl sub_080C3FCC
_080C77C8:
	ldr r3, _080C77E8  @ =0x000010C2
	add r0, r5, r3
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080C7814
	mov r0, #153
	strb r0, [r1]
	strb r6, [r7]
	b _080C7814
_080C77DC:
	.4byte 0x00001072
_080C77E0:
	.4byte 0x00000EB5
_080C77E4:
	.4byte 0x00000D84
_080C77E8:
	.4byte 0x000010C2
_080C77EC:
	ldr r7, _080C780C  @ =0x00001012
	add r0, r5, r7
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080C7814
	ldr r1, _080C7810  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
_080C7808:
	mov r0, #0
	b _080C7816
_080C780C:
	.4byte 0x00001012
_080C7810:
	.4byte 0x00000FA2
_080C7814:
	mov r0, #1
_080C7816:
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C7490

