	THUMB_FUNC_START sub_0811374C
sub_0811374C: @ 0x0811374C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _081137F0  @ =gUnknown_02010994
	ldrb r0, [r0]
	cmp r0, r4
	beq _08113794
	add r0, r4, #0
	bl sub_080A69FC
	ldr r1, _081137F4  @ =gRam
	ldr r2, _081137F8  @ =0x00000EE2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r2, [r0]
	ldr r3, _081137FC  @ =0x00000F02
	add r0, r1, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r3, _08113800  @ =0x00000952
	add r0, r1, r3
	ldrh r0, [r0]
	sub r2, r2, r0
	add r3, r3, #14
	add r0, r1, r3
	mov r3, #0
	strh r2, [r0]
	ldr r0, _08113804  @ =0x00000969
	add r1, r1, r0
	strb r3, [r1]
	add r0, r4, #0
	mov r1, #13
	bl sub_080C57F8
_08113794:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _0811388C
	ldr r0, _081137F4  @ =gRam
	ldr r3, _08113808  @ =0x00000F52
	add r1, r0, r3
	add r3, r4, r1
	ldrb r1, [r3]
	add r5, r0, #0
	cmp r1, #12
	beq _08113820
	ldr r1, _0811380C  @ =0x000010C2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _081137D6
	mov r0, #5
	strb r0, [r3]
	ldr r3, _08113810  @ =0x00001152
	add r0, r5, r3
	add r0, r4, r0
	strb r2, [r0]
	add r1, r1, #128
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r0, _08113814  @ =gUnknown_02010995
	strb r2, [r0]
_081137D6:
	ldr r3, _08113818  @ =0x00001710
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, #1
	bne _0811381C
	ldr r1, _08113814  @ =gUnknown_02010995
	ldrb r0, [r1]
	cmp r0, #47
	bhi _08113820
	add r0, r0, #1
	strb r0, [r1]
	b _08113820
	.byte 0x00
	.byte 0x00
_081137F0:
	.4byte gUnknown_02010994
_081137F4:
	.4byte gRam
_081137F8:
	.4byte 0x00000EE2
_081137FC:
	.4byte 0x00000F02
_08113800:
	.4byte 0x00000952
_08113804:
	.4byte 0x00000969
_08113808:
	.4byte 0x00000F52
_0811380C:
	.4byte 0x000010C2
_08113810:
	.4byte 0x00001152
_08113814:
	.4byte gUnknown_02010995
_08113818:
	.4byte 0x00001710
_0811381C:
	ldr r0, _0811385C  @ =gUnknown_02010995
	strb r2, [r0]
_08113820:
	ldr r1, _08113860  @ =gUnknown_0817D854
	add r6, r5, #0
	ldr r2, _08113864  @ =0x00000F52
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _0811388C
	ldr r0, _08113868  @ =gUnknown_02010993
	ldrb r1, [r0]
	cmp r1, #0
	bne _08113870
	ldr r3, _0811386C  @ =0x00001172
	add r0, r6, r3
	add r0, r4, r0
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C5044
	b _0811387A
_0811385C:
	.4byte gUnknown_02010995
_08113860:
	.4byte gUnknown_0817D854
_08113864:
	.4byte 0x00000F52
_08113868:
	.4byte gUnknown_02010993
_0811386C:
	.4byte 0x00001172
_08113870:
	ldr r1, _08113894  @ =0x00001172
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
_0811387A:
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C2C4C
	add r0, r4, #0
	bl sub_080C79F8
_0811388C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08113894:
	.4byte 0x00001172
	THUMB_FUNC_END sub_0811374C

