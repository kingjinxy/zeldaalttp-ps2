	THUMB_FUNC_START sub_0810C710
sub_0810C710: @ 0x0810C710
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r2, r3, #0
	ldr r4, _0810C758  @ =gRam
	ldr r0, _0810C75C  @ =0x00000D1A
	add r1, r4, r0
	mov r0, #8
	strb r0, [r1]
	ldr r1, _0810C760  @ =0x00000FC2
	add r0, r4, r1
	add r5, r3, r0
	ldrb r1, [r5]
	add r0, r1, #0
	cmp r0, #31
	bhi _0810C76C
	ldr r0, _0810C764  @ =0x00000D18
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0810C79A
	mov r0, #0
	strb r0, [r2]
	ldr r0, _0810C768  @ =0x00000F52
	add r1, r4, r0
	add r1, r3, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	mov r0, #112
	strb r0, [r5]
	b _0810C79A
_0810C758:
	.4byte gRam
_0810C75C:
	.4byte 0x00000D1A
_0810C760:
	.4byte 0x00000FC2
_0810C764:
	.4byte 0x00000D18
_0810C768:
	.4byte 0x00000F52
_0810C76C:
	cmp r0, #95
	bls _0810C790
	cmp r0, #96
	beq _0810C786
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _0810C79A
	add r0, r3, #0
	mov r1, #82
	bl sub_080CF140
	b _0810C79A
_0810C786:
	add r0, r2, #0
	mov r1, #44
	bl sub_080CF140
	b _0810C79A
_0810C790:
	ldr r0, _0810C7A0  @ =0x00000D18
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0810C79A:
	pop {r4,r5}
	pop {r0}
	bx r0
_0810C7A0:
	.4byte 0x00000D18
	THUMB_FUNC_END sub_0810C710

