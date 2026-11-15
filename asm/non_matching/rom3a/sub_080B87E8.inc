	THUMB_FUNC_START sub_080B87E8
sub_080B87E8: @ 0x080B87E8
	push {r4-r6,lr}
	mov r6, #0
	ldr r5, _080B88B8  @ =gRam
	ldr r0, _080B88BC  @ =0x00000FC2
	add r2, r5, r0
_080B87F2:
	add r1, r6, r2
	ldrb r0, [r1]
	cmp r0, #0
	beq _080B87FE
	sub r0, r0, #1
	strb r0, [r1]
_080B87FE:
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #15
	bls _080B87F2
	ldr r1, _080B88C0  @ =0x000009AD
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #254
	and r0, r0, r1
	lsl r2, r0, #24
	lsr r6, r2, #24
	ldr r3, _080B88C4  @ =0x00000A02
	add r0, r5, r3
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	cmp r1, #63
	bls _080B8870
	mov r0, #1
	and r1, r1, r0
	cmp r1, #0
	bne _080B8870
	ldr r0, _080B88C8  @ =0x00000958
	add r3, r5, r0
	mov r0, #0
	ldrsh r1, [r3, r0]
	ldr r0, _080B88CC  @ =gUnknown_08170820
	add r2, r6, #0
	add r0, r2, r0
	ldrh r0, [r0]
	cmp r1, r0
	beq _080B8852
	ldr r0, _080B88D0  @ =gUnknown_081708B8
	add r0, r2, r0
	ldrh r0, [r0]
	ldrh r1, [r3]
	add r0, r0, r1
	strh r0, [r3]
_080B8852:
	ldr r0, _080B88D4  @ =0x00000952
	add r3, r5, r0
	mov r0, #0
	ldrsh r1, [r3, r0]
	ldr r0, _080B88D8  @ =gUnknown_0817086C
	add r0, r2, r0
	ldrh r0, [r0]
	cmp r1, r0
	beq _080B8870
	ldr r0, _080B88DC  @ =gUnknown_08170904
	add r0, r2, r0
	ldrh r0, [r0]
	ldrh r1, [r3]
	add r0, r0, r1
	strh r0, [r3]
_080B8870:
	add r4, r5, #0
	ldr r2, _080B88E0  @ =0x000009DA
	add r0, r4, r2
	ldrh r0, [r0]
	cmp r0, #164
	bne _080B88F0
	bl sub_080AB70C
	ldr r3, _080B88E4  @ =0x00000AC8
	add r1, r4, r3
	ldr r2, _080B88D4  @ =0x00000952
	add r0, r4, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	mov r3, #149
	lsl r3, r3, #4
	add r1, r4, r3
	strh r0, [r1]
	add r2, r2, #220
	add r1, r4, r2
	strh r0, [r1]
	ldr r3, _080B88E8  @ =0x00000ACA
	add r1, r4, r3
	sub r2, r2, #214
	add r0, r4, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r3, _080B88EC  @ =0x00000956
	add r1, r4, r3
	strh r0, [r1]
	add r2, r2, #218
	add r1, r4, r2
	b _080B892C
	.byte 0x00
	.byte 0x00
_080B88B8:
	.4byte gRam
_080B88BC:
	.4byte 0x00000FC2
_080B88C0:
	.4byte 0x000009AD
_080B88C4:
	.4byte 0x00000A02
_080B88C8:
	.4byte 0x00000958
_080B88CC:
	.4byte gUnknown_08170820
_080B88D0:
	.4byte gUnknown_081708B8
_080B88D4:
	.4byte 0x00000952
_080B88D8:
	.4byte gUnknown_0817086C
_080B88DC:
	.4byte gUnknown_08170904
_080B88E0:
	.4byte 0x000009DA
_080B88E4:
	.4byte 0x00000AC8
_080B88E8:
	.4byte 0x00000ACA
_080B88EC:
	.4byte 0x00000956
_080B88F0:
	cmp r0, #41
	bne _080B892E
	bl sub_080AB70C
	ldr r3, _080B894C  @ =0x00000AC8
	add r1, r5, r3
	ldr r2, _080B8950  @ =0x00000952
	add r0, r5, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	mov r3, #149
	lsl r3, r3, #4
	add r1, r5, r3
	strh r0, [r1]
	add r2, r2, #220
	add r1, r5, r2
	strh r0, [r1]
	ldr r3, _080B8954  @ =0x00000ACA
	add r1, r5, r3
	sub r2, r2, #214
	add r0, r5, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r3, _080B8958  @ =0x00000956
	add r1, r5, r3
	strh r0, [r1]
	add r2, r2, #218
	add r1, r5, r2
_080B892C:
	strh r0, [r1]
_080B892E:
	ldr r0, _080B895C  @ =gUnknown_08170788
	lsr r1, r6, #1
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r6, #0
	bl _call_via_r1
	bl sub_080B8960
	bl sub_0812FA28
	pop {r4-r6}
	pop {r0}
	bx r0
_080B894C:
	.4byte 0x00000AC8
_080B8950:
	.4byte 0x00000952
_080B8954:
	.4byte 0x00000ACA
_080B8958:
	.4byte 0x00000956
_080B895C:
	.4byte gUnknown_08170788
	THUMB_FUNC_END sub_080B87E8

