	THUMB_FUNC_START sub_080AF654
sub_080AF654: @ 0x080AF654
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r6, _080AF740  @ =gRam
	ldr r1, _080AF744  @ =0x0000097C
	add r1, r1, r6
	mov r8, r1
	ldrb r5, [r1]
	ldr r2, _080AF748  @ =0x00001732
	add r2, r2, r6
	mov r9, r2
	strb r0, [r2]
	lsl r0, r0, #1
	ldr r4, _080AF74C  @ =0x0000199C
	add r1, r6, r4
	add r0, r0, r1
	ldrh r2, [r0]
	mov r1, #126
	and r1, r1, r2
	lsl r1, r1, #2
	mov r7, #150
	lsl r7, r7, #4
	add r3, r6, r7
	mov r2, #0
	mov r12, r2
	strh r1, [r3]
	ldrh r1, [r0]
	mov r0, #252
	lsl r0, r0, #5
	and r0, r0, r1
	lsr r0, r0, #4
	add r7, r7, #4
	add r4, r6, r7
	strh r0, [r4]
	mov r0, r8
	ldrb r2, [r0]
	ldr r1, _080AF750  @ =0x00001A3E
	add r0, r6, r1
	add r0, r2, r0
	ldrb r1, [r3]
	strb r1, [r0]
	ldr r7, _080AF754  @ =0x00001A3C
	add r1, r6, r7
	add r1, r2, r1
	ldr r0, _080AF758  @ =0x00000961
	add r3, r6, r0
	ldr r7, _080AF75C  @ =0x00000BA8
	add r0, r6, r7
	ldrh r0, [r0]
	lsr r0, r0, #8
	ldrb r7, [r3]
	add r0, r0, r7
	strb r0, [r1]
	strb r0, [r3]
	mov r1, #210
	lsl r1, r1, #5
	add r0, r6, r1
	add r0, r2, r0
	mov r7, r12
	strb r7, [r0]
	add r1, r1, #4
	add r0, r6, r1
	add r0, r2, r0
	ldrb r1, [r4]
	strb r1, [r0]
	ldr r4, _080AF760  @ =0x00001A42
	add r1, r6, r4
	add r1, r2, r1
	ldr r7, _080AF764  @ =0x00000965
	add r3, r6, r7
	ldr r4, _080AF768  @ =0x00000BAA
	add r0, r6, r4
	ldrh r0, [r0]
	lsr r0, r0, #8
	ldrb r7, [r3]
	add r0, r0, r7
	strb r0, [r1]
	strb r0, [r3]
	ldr r1, _080AF76C  @ =0x00001A46
	add r0, r6, r1
	add r2, r2, r0
	mov r4, r12
	strb r4, [r2]
	ldr r7, _080AF770  @ =0x000009E6
	add r0, r6, r7
	ldrb r0, [r0]
	cmp r0, #38
	beq _080AF778
	mov r1, r9
	ldrb r0, [r1]
	lsl r0, r0, #1
	ldr r2, _080AF774  @ =0x0000195C
	add r4, r6, r2
	add r0, r0, r4
	ldrh r0, [r0]
	cmp r0, #0
	bne _080AF778
	bl sub_0809F3EC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080AF778
	mov r0, #58
	bl sub_0809E43C
	mov r7, r8
	strb r5, [r7]
	mov r1, r9
	ldrb r0, [r1]
	lsl r0, r0, #1
	add r0, r0, r4
	mov r1, #1
	strh r1, [r0]
	mov r0, #0
	b _080AF786
_080AF740:
	.4byte gRam
_080AF744:
	.4byte 0x0000097C
_080AF748:
	.4byte 0x00001732
_080AF74C:
	.4byte 0x0000199C
_080AF750:
	.4byte 0x00001A3E
_080AF754:
	.4byte 0x00001A3C
_080AF758:
	.4byte 0x00000961
_080AF75C:
	.4byte 0x00000BA8
_080AF760:
	.4byte 0x00001A42
_080AF764:
	.4byte 0x00000965
_080AF768:
	.4byte 0x00000BAA
_080AF76C:
	.4byte 0x00001A46
_080AF770:
	.4byte 0x000009E6
_080AF774:
	.4byte 0x0000195C
_080AF778:
	ldr r0, _080AF794  @ =gRam
	ldr r2, _080AF798  @ =0x00001A4A
	add r0, r0, r2
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	mov r0, #1
_080AF786:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080AF794:
	.4byte gRam
_080AF798:
	.4byte 0x00001A4A
	THUMB_FUNC_END sub_080AF654

