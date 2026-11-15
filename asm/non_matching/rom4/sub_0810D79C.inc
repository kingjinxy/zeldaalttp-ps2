	THUMB_FUNC_START sub_0810D79C
sub_0810D79C: @ 0x0810D79C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r7, r6, #0
	add r0, r6, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810D848
	ldr r4, _0810D808  @ =gRam
	ldr r1, _0810D80C  @ =0x000016CD
	add r0, r4, r1
	mov r5, #0
	strb r5, [r0]
	ldr r2, _0810D810  @ =0x000016CE
	add r0, r4, r2
	strb r5, [r0]
	bl sub_0809945C
	ldr r1, _0810D814  @ =0x000016FA
	add r0, r4, r1
	strb r5, [r0]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r4, r2
	ldr r2, _0810D818  @ =0x00000ED2
	add r1, r4, r2
	add r1, r6, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _0810D81C  @ =0x000016C4
	add r0, r4, r1
	add r2, r2, #16
	add r4, r4, r2
	add r4, r6, r4
	ldrb r0, [r0]
	ldrb r1, [r4]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	sub r0, r3, #2
	mov r2, #128
	and r0, r0, r2
	cmp r0, #0
	bne _0810D820
	add r0, r6, #0
	bl sub_0810D850
	b _0810D848
	.byte 0x00
	.byte 0x00
_0810D808:
	.4byte gRam
_0810D80C:
	.4byte 0x000016CD
_0810D810:
	.4byte 0x000016CE
_0810D814:
	.4byte 0x000016FA
_0810D818:
	.4byte 0x00000ED2
_0810D81C:
	.4byte 0x000016C4
_0810D820:
	add r0, r3, #0
	add r0, r0, #12
	and r0, r0, r2
	cmp r0, #0
	beq _0810D832
	add r0, r6, #0
	bl sub_0810DAAC
	b _0810D848
_0810D832:
	mov r0, #128
	and r1, r1, r0
	cmp r1, #0
	bne _0810D842
	add r0, r6, #0
	bl sub_0810DA6C
	b _0810D848
_0810D842:
	add r0, r7, #0
	bl sub_0810DA2C
_0810D848:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810D79C

	.byte 0x00
	.byte 0x00
