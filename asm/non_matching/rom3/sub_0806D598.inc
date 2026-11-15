	THUMB_FUNC_START sub_0806D598
sub_0806D598: @ 0x0806D598
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r4, _0806D5E4  @ =gRam
	ldr r0, _0806D5E8  @ =0x00000516
	add r6, r4, r0
	ldrh r0, [r6]
	ldr r5, _0806D5EC  @ =0x0000FFFC
	add r1, r5, #0
	and r1, r1, r0
	mov r7, #0
	mov r2, #2
	mov r8, r2
	mov r0, r8
	orr r1, r1, r0
	strh r1, [r6]
	bl sub_0808AB34
	ldr r1, _0806D5F0  @ =0x000009DA
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #13
	bne _0806D604
	ldr r2, _0806D5F4  @ =0x0000051E
	add r1, r4, r2
	mov r0, #63
	strh r0, [r1]
	ldr r1, _0806D5F8  @ =0x00000998
	add r0, r4, r1
	strb r7, [r0]
	ldr r2, _0806D5FC  @ =0x00000999
	add r0, r4, r2
	strb r7, [r0]
	ldr r0, _0806D600  @ =0x00000514
	add r2, r4, r0
	ldrh r1, [r2]
	add r0, r5, #0
	b _0806D7BC
_0806D5E4:
	.4byte gRam
_0806D5E8:
	.4byte 0x00000516
_0806D5EC:
	.4byte 0x0000FFFC
_0806D5F0:
	.4byte 0x000009DA
_0806D5F4:
	.4byte 0x0000051E
_0806D5F8:
	.4byte 0x00000998
_0806D5FC:
	.4byte 0x00000999
_0806D600:
	.4byte 0x00000514
_0806D604:
	cmp r0, #144
	bne _0806D64C
	ldr r2, _0806D638  @ =0x0000051E
	add r1, r4, r2
	ldr r0, _0806D63C  @ =0x00003C42
	strh r0, [r1]
	ldr r1, _0806D640  @ =0x00000998
	add r0, r4, r1
	mov r1, #8
	strb r1, [r0]
	ldr r2, _0806D644  @ =0x00000999
	add r0, r4, r2
	strb r1, [r0]
	ldrh r1, [r6]
	add r0, r5, #0
	and r0, r0, r1
	mov r1, #3
	orr r0, r0, r1
	strh r0, [r6]
	ldr r0, _0806D648  @ =0x00000514
	add r2, r4, r0
	ldrh r1, [r2]
	add r0, r5, #0
	and r0, r0, r1
	mov r1, r8
	b _0806D7C0
_0806D638:
	.4byte 0x0000051E
_0806D63C:
	.4byte 0x00003C42
_0806D640:
	.4byte 0x00000998
_0806D644:
	.4byte 0x00000999
_0806D648:
	.4byte 0x00000514
_0806D64C:
	bl sub_0806DF4C
	cmp r0, #0
	beq _0806D656
	b _0806D7C4
_0806D656:
	ldr r2, _0806D684  @ =0x000009B4
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #23
	bne _0806D694
	ldr r0, _0806D688  @ =0x0000051E
	add r1, r4, r0
	mov r0, #63
	strh r0, [r1]
	ldr r1, _0806D68C  @ =0x00000998
	add r0, r4, r1
	strb r7, [r0]
	sub r2, r2, #27
	add r0, r4, r2
	strb r7, [r0]
	ldr r0, _0806D690  @ =0x00000514
	add r2, r4, r0
	ldrh r1, [r2]
	add r0, r5, #0
	and r0, r0, r1
	mov r1, #1
	b _0806D7C0
	.byte 0x00
	.byte 0x00
_0806D684:
	.4byte 0x000009B4
_0806D688:
	.4byte 0x0000051E
_0806D68C:
	.4byte 0x00000998
_0806D690:
	.4byte 0x00000514
_0806D694:
	ldr r1, _0806D6E8  @ =0x000009D3
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _0806D6A4
	b _0806D79C
_0806D6A4:
	ldr r2, _0806D6EC  @ =0x000009B5
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _0806D708
	ldr r1, _0806D6F0  @ =0x000009D4
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #98
	bne _0806D708
	ldr r2, _0806D6F4  @ =0x0000051E
	add r1, r4, r2
	ldr r0, _0806D6F8  @ =0x00003C42
	strh r0, [r1]
	ldr r1, _0806D6FC  @ =0x00000998
	add r0, r4, r1
	mov r1, #8
	strb r1, [r0]
	ldr r2, _0806D700  @ =0x00000999
	add r0, r4, r2
	strb r1, [r0]
	ldrh r1, [r6]
	add r0, r5, #0
	and r0, r0, r1
	mov r1, #3
	orr r0, r0, r1
	strh r0, [r6]
	ldr r0, _0806D704  @ =0x00000514
	add r2, r4, r0
	ldrh r1, [r2]
	add r0, r5, #0
	and r0, r0, r1
	mov r1, r8
	b _0806D7C0
_0806D6E8:
	.4byte 0x000009D3
_0806D6EC:
	.4byte 0x000009B5
_0806D6F0:
	.4byte 0x000009D4
_0806D6F4:
	.4byte 0x0000051E
_0806D6F8:
	.4byte 0x00003C42
_0806D6FC:
	.4byte 0x00000998
_0806D700:
	.4byte 0x00000999
_0806D704:
	.4byte 0x00000514
_0806D708:
	ldr r2, _0806D75C  @ =gRam
	ldr r1, _0806D760  @ =0x000009D3
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _0806D79C
	ldr r1, _0806D764  @ =0x000009B5
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0806D79C
	add r1, r1, #31
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #32
	beq _0806D79C
	ldr r0, _0806D768  @ =0x0000051E
	add r1, r2, r0
	ldr r0, _0806D76C  @ =0x00003C42
	strh r0, [r1]
	ldr r0, _0806D770  @ =0x00000998
	add r1, r2, r0
	mov r0, #14
	strb r0, [r1]
	ldr r0, _0806D774  @ =0x00000999
	add r1, r2, r0
	mov r0, #16
	strb r0, [r1]
	ldr r1, _0806D778  @ =0x000009DA
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #172
	bne _0806D784
	ldr r0, _0806D77C  @ =0x00000514
	add r2, r2, r0
	ldrh r1, [r2]
	ldr r0, _0806D780  @ =0x0000FFFC
	and r0, r0, r1
	b _0806D7C2
	.byte 0x00
	.byte 0x00
_0806D75C:
	.4byte gRam
_0806D760:
	.4byte 0x000009D3
_0806D764:
	.4byte 0x000009B5
_0806D768:
	.4byte 0x0000051E
_0806D76C:
	.4byte 0x00003C42
_0806D770:
	.4byte 0x00000998
_0806D774:
	.4byte 0x00000999
_0806D778:
	.4byte 0x000009DA
_0806D77C:
	.4byte 0x00000514
_0806D780:
	.4byte 0x0000FFFC
_0806D784:
	ldr r1, _0806D794  @ =0x00000514
	add r2, r2, r1
	ldrh r1, [r2]
	ldr r0, _0806D798  @ =0x0000FFFC
	and r0, r0, r1
	mov r1, #1
	b _0806D7C0
	.byte 0x00
	.byte 0x00
_0806D794:
	.4byte 0x00000514
_0806D798:
	.4byte 0x0000FFFC
_0806D79C:
	ldr r2, _0806D7D0  @ =gRam
	ldr r0, _0806D7D4  @ =0x0000051E
	add r1, r2, r0
	mov r3, #0
	mov r0, #63
	strh r0, [r1]
	ldr r1, _0806D7D8  @ =0x00000998
	add r0, r2, r1
	strb r3, [r0]
	add r1, r1, #1
	add r0, r2, r1
	strb r3, [r0]
	ldr r0, _0806D7DC  @ =0x00000514
	add r2, r2, r0
	ldrh r1, [r2]
	ldr r0, _0806D7E0  @ =0x0000FFFC
_0806D7BC:
	and r0, r0, r1
	mov r1, #3
_0806D7C0:
	orr r0, r0, r1
_0806D7C2:
	strh r0, [r2]
_0806D7C4:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806D7D0:
	.4byte gRam
_0806D7D4:
	.4byte 0x0000051E
_0806D7D8:
	.4byte 0x00000998
_0806D7DC:
	.4byte 0x00000514
_0806D7E0:
	.4byte 0x0000FFFC
	THUMB_FUNC_END sub_0806D598

