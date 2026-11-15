	THUMB_FUNC_START sub_080BAE8C
sub_080BAE8C: @ 0x080BAE8C
	push {r4,r5,lr}
	ldr r3, _080BAEC8  @ =gRam
	mov r0, #151
	lsl r0, r0, #4
	add r1, r3, r0
	mov r0, #0
	strh r0, [r1]
	mov r1, #150
	lsl r1, r1, #4
	add r4, r3, r1
	mov r0, #1
	strh r0, [r4]
	ldr r5, _080BAECC  @ =0x000016D6
	add r2, r3, r5
	mov r1, #0
	ldrsb r1, [r2, r1]
	cmp r1, #0
	beq _080BAF64
	cmp r1, #0
	bge _080BAED4
	sub r0, r0, #2
	strh r0, [r4]
	mov r0, #0
	ldrsb r0, [r2, r0]
	neg r0, r0
	ldr r2, _080BAED0  @ =0x00000964
	add r1, r3, r2
	strh r0, [r1]
	mov r1, #0
	b _080BAEE0
_080BAEC8:
	.4byte gRam
_080BAECC:
	.4byte 0x000016D6
_080BAED0:
	.4byte 0x00000964
_080BAED4:
	mov r1, #0
	ldrsb r1, [r2, r1]
	ldr r4, _080BAF9C  @ =0x00000964
	add r0, r3, r4
	strh r1, [r0]
	mov r1, #2
_080BAEE0:
	mov r0, #6
	bl sub_080716E4
	ldr r2, _080BAFA0  @ =gRam
	ldr r5, _080BAFA4  @ =0x00000968
	add r0, r2, r5
	ldrh r1, [r0]
	mov r3, #193
	lsl r3, r3, #4
	add r0, r2, r3
	strb r1, [r0]
	ldr r4, _080BAFA8  @ =0x000009C8
	add r5, r2, r4
	ldrh r0, [r5]
	cmp r0, #151
	beq _080BAF64
	cmp r0, #157
	beq _080BAF64
	lsl r3, r1, #16
	cmp r3, #0
	beq _080BAF64
	mov r0, #150
	lsl r0, r0, #4
	add r4, r2, r0
	mov r0, #0
	strh r0, [r4]
	mov r2, #1
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080BAF20
	strh r2, [r4]
_080BAF20:
	asr r0, r3, #17
	lsl r1, r0, #24
	lsr r3, r1, #24
	ldrh r0, [r5]
	cmp r0, #181
	beq _080BAF30
	cmp r0, #190
	bne _080BAF40
_080BAF30:
	and r3, r3, r2
	cmp r3, #0
	beq _080BAF3E
	ldrh r0, [r4]
	lsl r0, r0, #1
	add r0, r0, #1
	strh r0, [r4]
_080BAF3E:
	lsr r3, r1, #25
_080BAF40:
	ldr r1, _080BAFA0  @ =gRam
	ldr r2, _080BAFAC  @ =0x0000096C
	add r0, r1, r2
	strh r3, [r0]
	ldr r4, _080BAFB0  @ =0x00000B9E
	add r2, r1, r4
	mov r5, #150
	lsl r5, r5, #4
	add r0, r1, r5
	ldrh r0, [r0]
	ldrh r4, [r2]
	add r0, r0, r4
	strh r0, [r2]
	sub r5, r5, #10
	add r1, r1, r5
	ldrh r0, [r1]
	add r0, r0, r3
	strh r0, [r1]
_080BAF64:
	ldr r3, _080BAFA0  @ =gRam
	mov r1, #151
	lsl r1, r1, #4
	add r0, r3, r1
	mov r2, #1
	strh r2, [r0]
	mov r5, #150
	lsl r5, r5, #4
	add r4, r3, r5
	strh r2, [r4]
	ldr r0, _080BAFB4  @ =0x000016D7
	add r1, r3, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	beq _080BB048
	cmp r0, #0
	bge _080BAFB8
	sub r0, r2, #2
	strh r0, [r4]
	mov r0, #0
	ldrsb r0, [r1, r0]
	neg r0, r0
	ldr r2, _080BAF9C  @ =0x00000964
	add r1, r3, r2
	strh r0, [r1]
	mov r1, #4
	b _080BAFC6
_080BAF9C:
	.4byte 0x00000964
_080BAFA0:
	.4byte gRam
_080BAFA4:
	.4byte 0x00000968
_080BAFA8:
	.4byte 0x000009C8
_080BAFAC:
	.4byte 0x0000096C
_080BAFB0:
	.4byte 0x00000B9E
_080BAFB4:
	.4byte 0x000016D7
_080BAFB8:
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldr r4, _080BB060  @ =0x00000964
	add r0, r3, r4
	strh r1, [r0]
	mov r1, #6
_080BAFC6:
	mov r0, #0
	bl sub_080716E4
	ldr r2, _080BB064  @ =gRam
	ldr r5, _080BB068  @ =0x00000968
	add r0, r2, r5
	ldrh r1, [r0]
	ldr r3, _080BB06C  @ =0x00000C11
	add r0, r2, r3
	strb r1, [r0]
	ldr r4, _080BB070  @ =0x000009C8
	add r5, r2, r4
	ldrh r0, [r5]
	cmp r0, #151
	beq _080BB048
	cmp r0, #157
	beq _080BB048
	lsl r3, r1, #16
	cmp r3, #0
	beq _080BB048
	mov r0, #150
	lsl r0, r0, #4
	add r4, r2, r0
	mov r0, #0
	strh r0, [r4]
	mov r2, #1
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080BB004
	strh r2, [r4]
_080BB004:
	asr r0, r3, #17
	lsl r1, r0, #24
	lsr r3, r1, #24
	ldrh r0, [r5]
	cmp r0, #149
	beq _080BB014
	cmp r0, #158
	bne _080BB024
_080BB014:
	and r3, r3, r2
	cmp r3, #0
	beq _080BB022
	ldrh r0, [r4]
	lsl r0, r0, #1
	add r0, r0, #1
	strh r0, [r4]
_080BB022:
	lsr r3, r1, #25
_080BB024:
	ldr r1, _080BB064  @ =gRam
	ldr r2, _080BB074  @ =0x0000096C
	add r0, r1, r2
	strh r3, [r0]
	ldr r4, _080BB078  @ =0x00000B9C
	add r2, r1, r4
	mov r5, #150
	lsl r5, r5, #4
	add r0, r1, r5
	ldrh r0, [r0]
	ldrh r4, [r2]
	add r0, r0, r4
	strh r0, [r2]
	sub r5, r5, #16
	add r1, r1, r5
	ldrh r0, [r1]
	add r0, r0, r3
	strh r0, [r1]
_080BB048:
	ldr r1, _080BB064  @ =gRam
	ldr r2, _080BB070  @ =0x000009C8
	add r0, r1, r2
	ldrb r0, [r0]
	add r4, r1, #0
	cmp r0, #156
	beq _080BB0AC
	cmp r0, #156
	bgt _080BB07C
	cmp r0, #151
	beq _080BB080
	b _080BB0EA
_080BB060:
	.4byte 0x00000964
_080BB064:
	.4byte gRam
_080BB068:
	.4byte 0x00000968
_080BB06C:
	.4byte 0x00000C11
_080BB070:
	.4byte 0x000009C8
_080BB074:
	.4byte 0x0000096C
_080BB078:
	.4byte 0x00000B9C
_080BB07C:
	cmp r0, #157
	bne _080BB0EA
_080BB080:
	ldr r5, _080BB0A0  @ =0x00000B9E
	add r3, r4, r5
	ldrh r0, [r3]
	mov r1, #128
	lsl r1, r1, #6
	add r2, r0, r1
	ldr r0, _080BB0A4  @ =0x0000FFFF
	cmp r2, r0
	ble _080BB09C
	ldr r5, _080BB0A8  @ =0x00000956
	add r1, r4, r5
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_080BB09C:
	strh r2, [r3]
	b _080BB0EA
_080BB0A0:
	.4byte 0x00000B9E
_080BB0A4:
	.4byte 0x0000FFFF
_080BB0A8:
	.4byte 0x00000956
_080BB0AC:
	ldr r0, _080BB138  @ =0x00000B9E
	add r3, r4, r0
	ldrh r0, [r3]
	ldr r1, _080BB13C  @ =0xFFFFE000
	add r2, r0, r1
	cmp r2, #0
	bge _080BB0C4
	ldr r5, _080BB140  @ =0x00000956
	add r1, r4, r5
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
_080BB0C4:
	ldr r0, _080BB140  @ =0x00000956
	add r1, r4, r0
	mov r5, #193
	lsl r5, r5, #4
	add r0, r4, r5
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r5, [r1]
	add r0, r0, r5
	strh r0, [r1]
	strh r2, [r3]
	ldr r1, _080BB144  @ =0x00000952
	add r0, r4, r1
	ldrh r1, [r0]
	mov r2, #149
	lsl r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
_080BB0EA:
	add r3, r4, #0
	ldr r5, _080BB148  @ =0x000009DA
	add r0, r3, r5
	ldrh r1, [r0]
	ldr r0, _080BB14C  @ =0x00000181
	cmp r1, r0
	bne _080BB11A
	ldr r1, _080BB150  @ =0x00000958
	add r0, r3, r1
	ldrh r2, [r0]
	mov r5, #128
	lsl r5, r5, #1
	add r0, r5, #0
	ldr r5, _080BB140  @ =0x00000956
	add r1, r3, r5
	orr r0, r0, r2
	strh r0, [r1]
	ldr r1, _080BB144  @ =0x00000952
	add r0, r3, r1
	ldrh r1, [r0]
	mov r2, #149
	lsl r2, r2, #4
	add r0, r3, r2
	strh r1, [r0]
_080BB11A:
	ldr r3, _080BB154  @ =0x000009C6
	add r0, r4, r3
	ldrh r1, [r0]
	mov r0, #63
	and r0, r0, r1
	cmp r0, #27
	bne _080BB132
	ldr r5, _080BB158  @ =0x0000095E
	add r1, r4, r5
	mov r0, #194
	lsl r0, r0, #3
	strh r0, [r1]
_080BB132:
	pop {r4,r5}
	pop {r0}
	bx r0
_080BB138:
	.4byte 0x00000B9E
_080BB13C:
	.4byte 0xFFFFE000
_080BB140:
	.4byte 0x00000956
_080BB144:
	.4byte 0x00000952
_080BB148:
	.4byte 0x000009DA
_080BB14C:
	.4byte 0x00000181
_080BB150:
	.4byte 0x00000958
_080BB154:
	.4byte 0x000009C6
_080BB158:
	.4byte 0x0000095E
	THUMB_FUNC_END sub_080BAE8C

